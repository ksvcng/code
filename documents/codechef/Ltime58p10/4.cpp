#include<bits/stdc++.h>
#define f( a,b) for(int i=a;i<b;i++)
#define f1( a,b) for(int j=a;j<b;j++)
#define nl cout<<endl;
#define sp cout<<" ";
#define vect(c) vector<int> c;
#define vect1(n,s) vector<int> n(s);
#define co cout<<
#define cn cin>>
#define pu(a,b) a.push_back(b);
#define input freopen ("TestArray.txt","r",stdin);
#define output freopen("output.txt","w",stdout);
#define mod 1000000007
using namespace std;
int a,b,c;
long long dp[100000];
long long solve(long long sum)
{
if (sum<0){return 0;}
else if(sum==0){return 1;}
if(dp[sum]!=-1){return dp[sum];}
else{
    dp[sum]=( (solve(sum-a)%mod+solve(sum-b)%mod)%mod +solve(sum-c)%mod)%mod;
}
return dp[sum];
}
int main()
{
    //input
    output
   for(int i=0;i<100000;i++){dp[i]=-1;}
    int t;
    cin>>t;
//t=1;
    while(t--){

    int n;
   // cin>>n;

int A=1,B=3,C=5;
//cin>>A>>B>>C;
a=A;b=B;c=C;
long long k;
cin>>k;
//cout<<k<<endl;
long long ans=solve(k);
cout<<ans<<endl;
for(int i=0;i<=k;i++){cout<<dp[i];sp}nl
    }
return 0;}

