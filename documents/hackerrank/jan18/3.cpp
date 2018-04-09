
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long n,m,i,j,ans;
cin>>n>>m;
long long arr[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++){
    cin>>arr[i][j];
   }
}
  long long a[n];
  for(i=0;i<n;i++){a[i]=0;}
   long long q=m/n;
   long long r=m%n;
   if(q==0){

                    long long count=m;i=0;
              while(count>0){a[i]=a[n-i-1]=1;count-=2;i++;}
           if(m%2!=0){a[i-1]=0;}


   }

  else{
for(i=0;i<n;i++){a[i]=q;}
if(r>n/2){
for(i=0;i<r;i++){a[n-1-i]=q+1;}}
else{
    for(i=0;i<r;i++){a[i]=q+1;}
}
  }

for(i=0;i<n;i++){cout<<a[i]<<" ";}
return 0;}

