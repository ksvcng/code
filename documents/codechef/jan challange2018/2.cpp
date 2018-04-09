#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
long long sum=0,flag=0;
int i,j,n,temp;
cin>>n;
//int inp[n][n];
vector< vector<int> > inp(n,vector<int>(n));
for(i=0;i<n;i++){for(j=0;j<n;j++){cin>>inp[i][j];}}
for(i=0;i<n;i++){sort(inp[i].begin(),inp[i].end());}
//for(i=0;i<n;i++){for(j=0;j<n;j++){cout<<inp[i][j];}cout<<endl;}
//int x=n-1;
sum+=inp[n-1][n-1];temp=sum;
for(i=n-2;i>=0;i--){
         int k=0;
        while( inp[i][k]<temp){k++;if(k==n){break;}}
        if(k==0){flag=1;cout<<"-1"<<endl;break;}
        temp=inp[i][k-1];sum+=temp;
}
if(flag==0){cout<<sum<<endl;}
}
return 0;}


