#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
int n,u,d;
cin>>n>>u>>d;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int curr=arr[0],flag=0;
int count=1;
for(int i=1;i<n;i++){
    if(curr>=arr[i]  && curr-arr[i]<=d){count++;curr=arr[i];}
    else if(arr[i]>curr && arr[i]-curr<=u){count++;curr=arr[i];}
    else if(curr>=arr[i] && curr-arr[i]>d && flag==0){count++;flag=1;curr=arr[i];}
    else{break;}
}
cout<<count<<endl;
    }
return 0;}

