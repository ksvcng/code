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
#define input freopen ("input.txt","r",stdin);
#define output freopen("output.txt","w",stdout);

using namespace std;
int main()
{
int t;
cin>>t;

while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    long long sum=0,count=0;
    f(0,n){cin>>arr[i];sum+=arr[i];}
    for(int i=0;i<n;i++){
        if(arr[i]+k>(sum-arr[i])){count++;}
    }
    cout<<count<<endl;
}

return 0;}

