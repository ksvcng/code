#include<bits/stdc++.h>
#define f( a,b) for(int i=a;i<b;i++)
#define nl cout<<endl;
using namespace std;
vector< long long > divisor;
void printDivisors(long long n,long long sum)
{
    for(int i=1; i<=n; i++){
        if (sum%i==0){divisor.push_back(i);}}
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int  n;
    cin>>n;
int arr[n],acsum[n];
long long sum=0,sz=0;
f(0,n){cin>> arr[i];sum+=arr[i];}
divisor.clear();
printDivisors(n,sum);
sz=divisor.size();
long long st[sz];f(0,sz){st[i]=1;}
acsum[0]=arr[0];f(1,n){acsum[i]=acsum[i-1]+arr[i];}
long long k=0,tt;
for(int j=0;j<sz;j++){
        k=1;tt=sum/divisor[j];
        for(int i=0;i<n;i++){
                            if(acsum[i]==tt*k){k++;}
                            else if(acsum[i]>tt*k){st[j]=0;break;}}}
int ans[n];
for(int i=0;i<n;i++){ans[i]=0;}
for(int i=0;i<sz;i++){
    if(st[i]==1){ans[divisor[i]-1]=1;}
}
for(int i=0;i<n;i++){cout<<ans[i];}nl
    }
return 0;}

