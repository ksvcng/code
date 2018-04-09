#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
int a[n];
int b[n];
int ma=0,mb=0;
long long suma=0,sumb=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>ma){ma=a[i];}
    suma+=a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
    if(b[i]>mb){mb=b[i];}
    sumb+=b[i];
}
suma=suma-ma;
sumb=sumb-mb;
if(suma<sumb){cout<<"Alice"<<endl;}
else if(suma>sumb){cout<<"Bob"<<endl;}
else{cout<<"Draw"<<endl;}

    }
return 0;}

