#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){

long long n;
cin>>n;
long long high[n],low[n];
for(int i=0;i<n;i++){
    cin>>low[i]>>high[i];
}
long long q;
cin>>q;
while(q--){
long long m;
cin>>m;
long long qr[m];
for(int i=0;i<m;i++){
    cin>>qr[i];
}

long long count=0,ans=0;
for(int i=0;i<n;i++){
        count=0;
    for(int j=0;j<m;j++){
        if(qr[j]>=low[i] && qr[j]<=high[i]){count++;}
    }
if(count%2!=0){ans++;}
}

cout<<ans<<endl;


}


    }
return 0;}

