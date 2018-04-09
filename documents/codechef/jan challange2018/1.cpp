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
int a[4],flag=0;
cin>>a[0]>>a[1]>>a[2]>>a[3];
sort(a,a+4);
if(a[0]==a[1]){ if(a[2]==a[3]){}
                else{flag=1;}
              }
              else{flag=1;}
          if(flag==0){cout<<"YES"<<endl;}
          else {cout<<"NO"<<endl;}
}
return 0;}


