#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int mod(int a,int b){
if(a>b){return (a-b);}
return (b-a);
}
int main()
{ //  long long int t;
   int l,r,a;
   cin>>l>>r>>a;
int d=mod(l,r);
int add=(a-d)/2;
if(a>=d){cout<<2*(max(l,r)+add);}
else{ cout<<2*(min(l,r)+a);}





return 0;}

