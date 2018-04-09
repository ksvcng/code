#include<bits/stdc++.h>
#define f(s,n) for(long long i=s;i<n;i++)
using namespace std;
int main()
{    long long t;
    cin>>t;
    while(t--){
long long n,c,d,s;
cin>>n;
long long max=0;
f(0,n){cin>>d;if(d>max)max=d;}
cin>>c>>d>>s;
                                                                                                                            // double ans=max*(c-1);
cout << fixed << setprecision(9) <<(double)max*(c-1)<<endl;
    }
return 0;}

