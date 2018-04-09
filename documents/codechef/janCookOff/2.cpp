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
long long i,j,count=0,n,k,s;
cin>>n>>k>>s;
if( k>n || (n==k && s>6) || ((n*6)<(7*k) && s>=7) ){cout<<"-1"<<endl;}
else{
         count=(s*k)/n;
if((s*k)%n==0){cout<<count<<endl;}
    else{cout<<(count+1)<<endl;}
}


    }
return 0;}

