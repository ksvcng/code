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
int n;
cin>>n;
int sum=0;
while(n>=10){
    int k=n%10;
   sum+=k;
    n=n/10;
}
sum+=n;

double d=sqrt(sum);
int a=(int)d;
double e=a;
if(d==e){cout<<"2easy"<<endl;}
else{cout<<"2hard"<<endl;}


    }
return 0;}

