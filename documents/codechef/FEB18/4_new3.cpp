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
//cout<<M_PI;
double r=(double)d/l;
//cout<<r<<endl;
double angle= acos(r);
//cout<<"   "<<angle<<endl;
angle=angle*180/M_PI;
double tangle= (double)angle*t;
long long lhl=floor(tangle);
double deci=(double)(tangle-lhl);
cout<<" desi= "<<deci<<endl;
tangle=lhl%360;
tangle+=deci;
tangle=(double)tangle*M_PI/180;
//if(angle>=270){angle-=270;}
//else if(angle>180){angle-=180;}
//else if(angle>90){angle-=90;}
double f=(double)l*cos(tangle);
cout << fixed << setprecision(18) << f <<endl;
string s;
stringstream ss;
ss<<f;
s=ss.str();
cout<<"s= "<<s<<endl;
long long pp,qq;
//cout<<"s= "<<s<<"  v= "<<v<<endl;
string num="",dnum="";
//int flag=0;
int flag=0,c=0;
//cout<<" s= "<<s<<endl;
for(int i=0;i<s.length();i++){
    if(flag==0){
        if(s[i]=='.'){flag=1;c=i;break;}
        else{num+=s[i];}
    }
    else{
        dnum+=s[i];c++;
    }
}

num=num+dnum;


for(int kk=0;kk<(18-c);kk++){
    f=f*10;
}
//cout<<"num= "<<num<<endl;
//stringstream sp(num);
//sp>>pp;
//p=(double)p*l;
//cout<<" c= "<<c;
pp=floor(f);
qq=1;
for(int x=0;x<(18-c);x++){
    qq=qq*10;
}


cout<<pp<<" hh  "<<qq<<endl;


long long div =gcd(abs(pp),qq);
//cout<<div<<endl;

pp=pp/div;
qq=qq/div;
cout<<"p= "<<pp<<"  q= "<<qq<<endl;
//cout<<p<<"   "<<q<<endl;
//q=3;long long mod1=32;
//cin>>q>>mod1;
long long ri=MI(qq,mod);
cout<<" ri= "<<ri<<endl;
//cout<<endl<<endl<<endl;
//cout<<r<<endl;
//cout<<r<<endl;
//cout<<"r= "<<r<<endl;
long long fff=pp*ri;
cout<<"p*r= "<<fff<<endl;
cout<<" p*r%mod= "<<fff%mod<<endl;
long long ans=((pp*ri)%mod);
if(ans<0){ans=mod+ans;}
cout<<ans<<endl;













//cout<<tangle<<endl;
//cout << fixed << setprecision(10) << tangle <<endl;
//angle=angle*M_PI/180;
//tangle=cos(tangle);

//cout << fixed << setprecision(60) << tangle <<endl;
//tangle=-(double)527/625;
//cout << fixed << setprecision(10) << f <<endl;

//else{}



    }
return 0;}


