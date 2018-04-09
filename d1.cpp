#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
long long n;
int flag=0;
cin>>n;
for(long long i=2;i<=sqrt(n);i++){if(n%i==0){cout<<"0"<<endl;flag=1;break;}}
if(flag==0){
cout<<"1"<<endl;}
    }
return 0;
}
