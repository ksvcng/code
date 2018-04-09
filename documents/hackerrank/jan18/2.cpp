
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long n,k,q,r;
    cin>>n>>k;
     q=(n/k);
     r=n%k;
   // cout<<" n= "<<n<<" k= "<<k<<" q= "<<q<<" r= "<<r<<endl;
    long long result=0;
   // cout<<q<<" "<<r<<" "<<result<<" ";
    result=r*q*(q+1)/2;
    result+=(k-r)*q*(q-1)/2;
    cout<<result;


return 0;}

