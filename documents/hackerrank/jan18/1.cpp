
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int mod (int a,int b)
{
    if(a>=b){return (a-b);}
    return (b-a);
}

int main()
{   long long int n,k,i;
    cin>>n>>k;
    long long arr[n];
int cou=0;
for(i=0;i<n;i++){cin>>arr[i];if(arr[i]==arr[0]){cou++;}}
if(k==0){cout<<cou;}
else{
long long dif[n-1];
for(i=0;i<n-1;i++){dif[i]=mod(arr[i+1],arr[0]);}
int count=1;
int life=k;
i=1;
while(k>0){
        if(i<n-1){
        if(dif[i-1]<=k)
   {count++;k-=dif[i-1];
   for(int j=i;j<n-1;j++){dif[j]=mod(arr[j],arr[i]);}
   i++;
        }}
        else{break;}
}
cout<<count;
}


return 0;}

