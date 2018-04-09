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
long long n,csum=0,count=1;
cn n;
int arr[n];
f(0,n){cn arr[i];}
sort(arr,arr+n);
f(1,n){if(csum<=arr[i]){count++;csum+=arr[i];}}
cout<<count;
return 0;}

