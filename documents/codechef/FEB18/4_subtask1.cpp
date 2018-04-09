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

long long MI(long long  a)
{
    long long m0 = mod;
    long long m=mod;
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
//cout<<fixed<<setprecision(25)<<(double)19/61<<endl;
    cin>>k;
    while(k--){
int  l,d;
int t;
cin>>l>>d>>t;
long long p,q;
double v,tt;
if(t==1){cout<<d<<endl; }
else if(t==2){

long long two=(l* ((((( (2*d*d)%mod) * (MI(l*l)%mod) )%mod) -1 + mod)%mod )%mod) %mod;
cout<<two<<endl;
   // p=l*((2*d*d)-(l*l));
   // q=(l*l);
}
else if(t==3){
        long long three=(l*(((((((4*d)%mod)*(MI(l)%mod))%mod)*((((d*d)%mod)*(MI(l*l)%mod))%mod)%mod)-((((3*d)%mod)*(MI(l)%mod))%mod)+mod)%mod))%mod;
cout<<three<<endl;
//cout<<"v= "<<v<<endl;

   // p=l*((4*d*d*d)-(3*d*l*l));
   // q=(l*l*l);

}
else{}
//cout<<p<<"   "<<q<<endl;
/**
string s;
stringstream ss;
ss<<v;
s=ss.str();
//cout<<"s= "<<s<<"  v= "<<v<<endl;
string num="",dnum="";
int flag=0,c=0;
for(int i=0;i<s.length();i++){
    if(flag==0){
        if(s[i]=='.'){flag=1;}
        else{num+=s[i];}
    }
    else{
        dnum+=s[i];c++;
    }
}
//cout<<"num= "<<num<<"  dnum= "<<dnum<<endl;
num=num+dnum;
//cout<<"num= "<<num<<endl;
stringstream sp(num);
sp>>p;
p=(double)p*l;
q=pow(10,c);

//cout<<p<<" hh  "<<q<<endl;
//cout<<"p= "<<p<<"  q= "<<q<<endl;
long long div =gcd(abs(p),q);
//cout<<div<<endl;

p=p/div;
q=q/div;
//cout<<"p= "<<p<<"  q= "<<q<<endl;
//cout<<p<<"   "<<q<<endl;
//q=3;long long mod1=32;
//cin>>q>>mod1;
long long r=MI(q,mod);
//cout<<endl<<endl<<endl;
//cout<<r<<endl;
//cout<<r<<endl;
//cout<<"r= "<<r<<endl;
long long ans=((p*r)%mod);
if(ans<0){ans=mod+ans;}
cout<<ans<<endl;
//cout << fixed << setprecision(60) << tangle <<endl;

//else{}
*/


    }
return 0;}


