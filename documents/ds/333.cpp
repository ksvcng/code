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








int getRoutes(int V,int input2,vector < vector < int > > input3)
{

     int i,j,ans=0;

     int input1=V;
	//Write code here
	 int graph[input1][input1];
	 int max=0;
	 for(i=0;i<input2;i++){max+=input3[i][2];}

	 for(i=0;i<input1;i++){
            for(j=0;j<input1;j++){
                {graph[i][j]=max;}
}
	 }
//cout<<"a";
	 for(i=0;i<input2;i++){graph[input3[i][0]-1][input3[i][1]-1]=input3[i][2];
                           graph[input3[i][1]-1][input3[i][0]-1]=input3[i][2];   }

                      /**      for(i=0;i<input1;i++){
        for(j=0;j<input1;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
	 }*/
     int parent[V];
     int key[V];
     bool mstSet[V];
     for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
     key[0] = 0;
     parent[0] = -1;
     for (int count = 0; count < V-1; count++)
     {
          int min = INT_MAX, u;

   for (int v = 0; v < V; v++)
     if (mstSet[v] == false && key[v] < min)
         min = key[v], u = v;
        //int u =minKey(V1,key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++)
          if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v])
             parent[v]  = u, key[v] = graph[u][v];
     }

      int sum=0;
  // printf("Edge   Weight\n");
   for (int i = 1; i < V; i++){
  //printf("a");
   //  printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
      sum+=graph[i][parent[i]];
     // return sum;

      }
if(sum>max){sum=0;}
    return sum;
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


