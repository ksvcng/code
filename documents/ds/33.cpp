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








int getRoutes(int input1,int input2,vector < vector < int > > input3)
{
    int i,j,ans=0;
	//Write code here
	 int graph[input1][input1];
	 for(i=1;i<=input1;i++){
            for(j=1;j<=input1;j++){
                {graph[i][j]=0;}
}
	 }

	 for(i=0;i<input2;i++){graph[input3[i][0]][input3[i][1]]=input3[i][2];
                           graph[input3[i][1]][input3[i][0]]=input3[i][2];   }
	 for(i=1;i<=input1;i++){
        for(j=1;j<=input1;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
	 }
//	 ans= primMST(graph[input1][input1],input1);
return ans;
}

int main() {
    int output;
    int ip1;
    cin >> ip1;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    int ip2;
    cin >> ip2;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    int ip3_rows = 0;
    int ip3_cols = 0;
    cin >> ip3_rows >> ip3_cols;
    vector< vector < int > > ip3(ip3_rows);
    for(int ip3_i=0; ip3_i<ip3_rows; ip3_i++) {
        for(int ip3_j=0; ip3_j<ip3_cols; ip3_j++) {
            int ip3_tmp;
            cin >> ip3_tmp;
            ip3[ip3_i].push_back(ip3_tmp);
        }
    }

    output = getRoutes(ip1,ip2,ip3);
    cout << output << endl;
    return 0;
}

