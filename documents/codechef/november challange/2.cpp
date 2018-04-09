#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
            long long max=10000000000,min=0,i,n,flag=1,r,temp2,temp;
            cin>>n>>r;
    long long arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];//cout<<"n= "<<i;
    }
    if(arr[n-1]!=r){cout<<"NO"<<endl;}
    else {
        for(i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                    if(min==0){temp2=arr[i];}
                        else
                   {temp2=min;}
                   min=arr[i];
                   if(min<temp2){cout<<"NO"<<endl;flag=0;break;}
            }
            else {
                    if(max==10000000000){temp=arr[i];}
                    else
                   {temp=max;}
                     max=arr[i];
                     if(max>temp){cout<<"NO"<<endl;flag=0;break;}
            }
        }
        if(flag==1){if(r<max && r>min){cout<<"YES"<<endl;}
                    else cout<<"NO"<<endl;}

    }



    }
return 0;}
