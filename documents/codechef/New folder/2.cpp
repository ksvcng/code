#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int isPrime(int a){
for(int i=2;i<=sqrt(a);i++)
{
    if(a%i==0){return (1);}


}
return 0;
}
int main()
{   long long int t;
    cin>>t;
    int prime[500000];
    int size=0,j=0;
    for(int i=2;i<=500000;i++)
    {
        if(isPrime(i)==0){prime[j]=i;j++;}
    }

//for(int i=0;i<j;i++){cout<<prime[i]<<" ";}
    while(t--){
int n;
cin>>n;
int m,p;
for(int i=0;i<j;i++)
{
    int c=n-prime[i];
    if(isPrime(c)==0){cout<<prime[i]<<" "<<c<<endl;break;}
}




    }
return 0;}

