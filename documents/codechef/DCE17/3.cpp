#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
int mod( long v);
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
            long n,i,ans=0;
cin>>n;
long f[2*n+1];
for(i=2;i<=n+1;i++){f[i]=i-1;}
for(i=n+2;i<=2*n;i++){f[i]=(2*n)+1-i;}
for(i=2;i<=2*n;i++){ans+=f[i]*mod(i);}
cout<<ans<<endl;
    }
return 0;}

int mod (long v)
{
   long r;
   int o=0,e=0;
   while(v!=0){
    r=v%10;
    v=v/10;
    if(r%2==0){e+=r;}
    else{o+=r;}
        //count++;
   }
   if(e>=o){return (e-o);}
   else {return (o-e); }
}




