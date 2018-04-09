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
    long n,i,max=0,count=0,count2=0;
    double ans,c1,c2,num;
    cin>>n;
    long arr[n];
    for(i=0;i<n;i++){cin>>arr[i];}
    sort(arr,arr+n);
    i=n-2;
   while(arr[n-1]==arr[i])
   {
       count++;i--;if(i==-1){break;}
   }
   if(count<1)
   {
       i=n-3;count2=0;
       while(arr[n-2]==arr[i])
{
    count2++;i--;if(i==-1){break;}
}
  }
  c1=double(count);
  c2=double(count2);
  num=double(n);

  if(count>=1){

    ans=((c1+1)*c1)/(num*(num-1));}
    else {
            if(c2>=1){
        ans=2*(c2+1)/(num*(num-1));}
        else
            ans=1/(num*(num-1));
    }

     cout<<ans<<endl;

    }
return 0;}

