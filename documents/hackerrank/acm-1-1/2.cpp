
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
long long t,n,r,h1,k1,i,h,k;
cin>>t;
while(t--){
        long long flag=1,d;
        float df;
    cin>>n>>r>>h>>k;

    for(i=0;i<n;i++)
    {
        cin>>h1>>k1;

       d=pow( (h1-h),2)+pow((k1-k),2);

        df=(float)sqrt(d);

       if(r<df)
       {
          flag=0;

       }


    }
    if(flag==1){
        cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}




}



return 0;}
