#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int totalchocolates(vector < int >v)
{
	int n=v.size();
	int sum=0;
	std::priority_queue<int, std::vector<int>, std::greater<int> > v1;
	for(int i=0;i<n;i++)
	    v1.push(v[i]);
	while(!v1.empty()){
	    if(v1.size()==1){
	        if(v1.top()<=1000) sum+=(v1.top());
	        break;
	    }
	    if(v1.top()>1000){
	        v1.pop();
	        continue;
	    }
	    int var=v1.top();
	    sum+=(var/2);
	    v1.pop();
	    int var1=v1.top();
	    var1+=(var-(var/2));
	    v1.pop();
	    if(var1<=1000)
	        v1.push(var1);
	}
	return sum;
}



int main() {
    int output;
    int ip1_size = 0;
    cin >> ip1_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> ip1;
    int ip1_item;
    for(int ip1_i=0; ip1_i<ip1_size; ip1_i++) {
        cin >> ip1_item;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        ip1.push_back(ip1_item);
    }
    output = totalchocolates(ip1);
    cout << output << endl;
    return 0;
}


