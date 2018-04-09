#include<bits/stdc++.h>
using namespace std;
int main()
{   long  long n,q;
    cin>>n>>q;
    long long a[n];
    for(long long i=0;i<n;i++){cin>>a[i];}
    while(q--){
long long op,x,y;
cin>>op>>x>>y;
if(op==1){a[x-1]=y;}
else{
      long long  l=y-x+1;
        x--;y--;
long long cop[l],j=0;
for(long long i=x;i<=y;i++){cop[j]=a[i];j++;}
sort(cop,cop+l,greater<long long>());
long long flag=0;
for(long long i=0;i<l-2;i++){
    if(cop[i]<cop[i+1]+cop[i+2]){cout<<cop[i]+cop[i+1]+cop[i+2]<<endl;flag=1;break;}
}
if(flag==0){cout<<"0"<<endl;}
}
    }
return 0;}

