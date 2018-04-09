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
long long i,j,count=0,n,k,d0,d1;
cin>>k>>d0>>d1;
long long value=d0+d1;
long long arr[]={2,4,8,6,2,4,8,6,2,4,8,6};
long long s=(d0+d1)%10;
if(k==2){if((d0+d1)%3==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;}
else if(s==0){cout<<"NO"<<endl;}
else if(s==5 && k>2){cout<<"NO"<<endl;}
else if(s==5 && k==2){if(value%3==0){cout<<"YES"<<endl;}
                    else cout<<"NO"<<endl;}


else{
    if(s%2==0){
        long long temp=d0+d1+s;
        long long q=(k-3)/4;
        long long r=(k-3)%4;
        temp+=2*q;
        //int p=0;
       // while(arr[p]!=s){p++;}
        for(int f=0;f<r;f++){

           int p=(2*s)%10;
            temp+=p;
            s=p;
        }
        if(temp%3==0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    else{
         long long temp=d0+d1+s;
        long long q=(k-3)/4;
        long long r=(k-3)%4;
        temp+=2*q;
       // int p=0;
        //while(arr[p]!=((2*s)%10)){p++;}
        for(int f=0;f<r;f++){
                int p=(2*s)%10;
            temp+=p;
            s=p;
        }
        if(temp%3==0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}

    }
}



    }
return 0;}

