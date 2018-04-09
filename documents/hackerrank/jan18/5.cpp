
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t,i;
   int   n,k;
   cin>>n>>k;
   int a[n],b[n],c[n];
   for(i=0;i<n;i++){
    cin>>a[i]>>b[i]>>c[i];
   }
   long long ans=1000000000000000;
   int g=100000000,y;
   if(k<g){g=k;}
   for(t=0;t<g;t++){ long long maxi=0;
    for(int i=0;i<n;i++){
   long long ff=((a[i]+t)%k+(b[i]+t)%k+(c[i]+t)%k);
   if(ff>maxi){maxi=ff;}


    }
    if(ans>maxi){ans=maxi;y=t;}
   }
cout<<ans<<"  "<<y;

return 0;}

