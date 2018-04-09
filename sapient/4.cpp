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
long long n,x,y;
cn n>>x>>y;
long long arr[n];

f(0,n){cn arr[i];arr[i]=(arr[i]%(x+y));}
double sonu,monu,splus,mplus;


f(0,n){
    string ans="";
    sonu=(double)1/x;
    monu=(double)1/y;
    splus=sonu;mplus=monu;
if(arr[i]==(x+y-1) || arr[i]==0){ans="Both";}
else{
        while(arr[i]>=1){
    if(abs(sonu-monu)<0.0000000000000001){arr[i]-=2;ans="Both";sonu+=splus;monu+=mplus;}
    else if( sonu<monu){arr[i]--;ans="Sonu";sonu+=splus;}
     else if( sonu>monu){arr[i]--;ans="Monu";monu+=mplus;}}
}
cout<<ans<<endl;
}

return 0;}

