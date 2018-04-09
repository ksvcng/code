/**#include<bits/stdc++.h>
#include <stdio.h>
#include <limits.h>
#define V 5

int minKey(int key[], bool mstSet[])
{

   int min = INT_MAX, min_index;

   for (int v = 0; v < V; v++)
     if (mstSet[v] == false && key[v] < min)
         min = key[v], min_index = v;

   return min_index;
}


int printMST(int parent[], int n, int graph[V][V])
{
  int sum=0;
  // printf("Edge   Weight\n");
   for (int i = 1; i < V; i++){
  //printf("a");
     // printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
      sum+=(graph[i][parent[i]]);
     // return sum;

      }
      return sum;
}

int primMST(int graph[V][V])
{
    int ans=0;
     int parent[V];
     int key[V];
     bool mstSet[V];
     for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
     key[0] = 0;
     parent[0] = -1;
     for (int count = 0; count < V-1; count++)
     {
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++)
          if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v])
             parent[v]  = u, key[v] = graph[u][v];
     }
    ans= printMST(parent, V, graph);
}



int main()
{
int jj;
   int graph[V][V] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };
   jj= primMST(graph);
printf("%d",jj);
    return 0;
}


*/

#include<bits/stdc++.h>
#include <stdio.h>
#include <limits.h>
//#define V 5
/**
int minKey(int V2,int key[], bool mstSet[])
{

   int min = INT_MAX, min_index;

   for (int v = 0; v < V2; v++)
     if (mstSet[v] == false && key[v] < min)
         min = key[v], min_index = v;

   return min_index;
}


int printMST(int parent1[], int V3 , int graph2[][])
{
  int sum=0;
  // printf("Edge   Weight\n");
   for (int i = 1; i < V3; i++){
  //printf("a");
     // printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
      sum+=graph2[i][parent1[i]];
     // return sum;

      }
      return sum;
}
*/
/**
int primMST(int V1,int graph1[5][5])
{
    printf("%d",V1);
    int ans=0;
     int parent[V1];
     int key[V1];
     bool mstSet[V1];
     for (int i = 0; i < V1; i++)
        key[i] = INT_MAX, mstSet[i] = false;
     key[0] = 0;
     parent[0] = -1;
     for (int count = 0; count < V1-1; count++)
     {
        int u ;//= minKey(V1,key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V1; v++)
          if (graph1[u][v] && mstSet[v] == false && graph1[u][v] <  key[v])
             parent[v]  = u, key[v] = graph1[u][v];
     }
  //  ans= printMST(parent, V1, graph1);{{{{{{{{{{{{{{{{{{{
  {{
}

*/

int main()
{
int jj;
int V=7;
//cin V;
   int graph[7][7] = { {  0,   0,  0, 30, 100,   0, 40},
                       {  0,   0, 10,  0,   0, 200,  0},
                       {  0,  10,  0, 20,   0,   0,  0},
                       { 30,   0, 20,  0,   0, 300,  0},
                       {100,   0,  0,  0,   0,  60,  0},
                       {  0, 200,  0,300,  60,   0, 50},
                       { 40,   0,  0,  0,   0,  50,  0},
                     };

 //  printf("%d",V);
    int ans=0;
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
     printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
      sum+=graph[i][parent[i]];
     // return sum;

      }


printf("%d",sum);
    return 0;
}
