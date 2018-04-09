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
    /*
     * Complete the function below.
    */
    int totalchocolates(vector < int > input1)
{
    int temp,sum=0,temp1,flag=0,i;
	int n=input1.size();
	 priority_queue <int, vector<int>, greater<int> > pq;
	 for(i=0;i<n;i++){pq.push(input1[i]);}
	// cout<<"pq.size = "<<pq.size();
	 while(pq.size()>1){
           // cout<<endl<<" element to remove "<<pq.top()<<endl;
        if(pq.top()>1000){break;}
        else{
            temp=pq.top();
            sum+=temp/2;
            pq.pop();
            temp1=pq.top();
            pq.pop();
            temp1+=temp-temp/2;//cout<<temp1<<"mm";
            if(temp1<=1000)
            pq.push(temp1);

     //cout<<endl<<"pq.top "<<pq.top()<<" pq.size" <<pq.size();
       // cout<<endl<<"sum= "<<sum<<endl;
        }
	 }

            if(pq.top()<=1000 && pq.size()!=0){
                //cout<<"   loop b ";
                sum+=pq.top();
//cout<<endl<<"sum= "<<sum<<endl;
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

