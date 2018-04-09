#include<bits/stdc++.h>
#define mod 1000000007
#define PI 3.14
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
       return a;
    return gcd(b, a%b);
}

long long MI(long long  a, long long m)
{
    long long m0 = m;
    long long y = 0, x = 1;
    if (m == 1)
      return 0;

    while (a > 1)
    {
        long long q = a / m;
        long long t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
       x += m0;
    return x;
}

int main()
{   long long int k;
    cin>>k;
    while(k--){
int  l,d;
int t;
cin>>l>>d>>t;
long long p,q;
if(t==1){p=d;q=1;}
if(t==2){
    p=((2*d*d)-(l*l));
    q=(l*l);
}
if(t==3){
    p=((4*d*d*d)-(3*d*l*l));
    q=(l*l*l);

}
else{}
cout<<p<<"   "<<q<<endl;
p=p*l;
cout<<p<<"   "<<q<<endl;
double tt=(double)p/q;
cout<<"tt= "<<tt<<endl;


long long div =gcd(abs(p),q);
//cout<<div<<endl;

p=p/div;
q=q/div;
cout<<p<<"   "<<q<<endl;
long long r=MI(q,mod);
cout<<" r= "<<r<<endl;
long long fff=p*r;
cout<<"p*r= "<<fff<<endl;
cout<<" p*r%mod= "<<fff%mod<<endl;

long long ans=((p*r)%mod);
if(ans<0){ans=mod+ans;}
cout<<ans<<endl;
//cout << fixed << setprecision(60) << tangle <<endl;

//else{}



    }
return 0;}
