//Zonal Computing Olympiad 2015, 29 Nov 2014    Variation Problem Code: ZCO15002
#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long i,j,k,k1=0,ans=0,sum=0,res=0;
    long long n;
    cin>>n>>k;
  //  if(n<1){exit(0);}
    long data[n];
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    if(n<=4000){
            for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(data[i]-data[j]>=k || data[j]-data[i]>=k)
            {
                res++;
            }
        }
    }
cout<<res;




    }


   else{


   sort(data,data+n);
  // cout<<"element of sorted array ascending :";
  //  for(i=0;i<n;i++){cout<<data[i]<<" ";}
   //cout<<endl;
   long arr[n];
   for(i=0;i<n;i++){
    arr[i]=data[n-i-1];
   }
   /**cout<<"element of sorted array :";
    for(i=0;i<n;i++){cout<<arr[i]<<" ";}
   cout<<endl;*/
   j=n-1;
   long a[j];
   for(i=0;i<j;i++){a[i]=arr[i]-arr[i+1];}
 //  for(i=0;i<j;i++){cout<<a[i]<<" ";}
 //  cout<<endl;
   i=0;
   while((sum+=a[i])<k){i++;if(i==j){break;}}
  //cout<<sum <<" "<<i<<endl;
   if(sum<k){cout<<"0";}
   else{
   // j=1;
    ans=ans+n-1-i;i++;
    sum=sum-a[k1];k1++;
    while(i<j){
    while(sum <k){sum+=a[i];i++;if(i==j){break;}}
    if(i!=j){
    sum=sum-a[k1];ans+=n-i;k1++;}


   }
 //  cout<<"i= "<<i<<" sum= "<<sum<<" k1= "<<k1;
   if(i==j && sum>=k){ans+=j-k1;}
   cout<<ans;
   }


   }
return 0;
}

