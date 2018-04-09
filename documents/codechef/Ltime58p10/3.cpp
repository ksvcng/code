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
long long abs(long long a,long long b){
if(a>b){return a-b;}
return b-a;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long x,y;
       // cout<<a<<b<<c<<endl;
        x=a+c;
        y=2*b;
       // cout<<x<<y<<endl;
        long long d=abs(x,y);
        if(d%2==0){cout<<d/2<<endl;}
        else{cout<<d/2+1<<endl;}

    }

return 0;}

/**

5
-5 0 5
-5 7 6
-10 -100 20
1 -1 1
51 23 10



*/
