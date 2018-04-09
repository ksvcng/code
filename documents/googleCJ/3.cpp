#include<bits/stdc++.h>
#define input freopen ("input.txt","r",stdin);
#define output freopen("output.txt","w",stdout);
double sqrt2=1.414213;
using namespace std;
int main()
{
    //input
    //output
    ios_base::sync_with_stdio(false);
    int t;
    cin >>t;
    for(int k=1;k<=t;k++){

double n,sum=0,count=0,l=0,b=0,x1=0,x2=0,x3=0,x4=0,y1=0,y2=0,y3=0,y4=0,cost,sint,sinfi,cosfi;sqrt2=1.414213;
    cin>>n;
    x1=(double)n/2;
    x3=x1;if(x1!=0){(x3=x1*(-1.0));}
    double y,p,q,r,s,mm,nn,bb;
p=(double)(sqrt2)*(sqrt2);
s=(double)n*n;
q=(double)p-s;
y=(double)sqrtl(q);
y=(double)y/p;
   y3=y;
    y1=y3;if(y3!=0){y1=y3*(-1);}
    cosfi=x1*sqrt(2);
    sinfi=y3*sqrt(2);
    cost=y3+x1;
    sint=x1-y3;
    x2=(0.5)*cost - (0.5)*sint ;
    y2= (0.5)*cost +(0.5)*sint;
    cout<<"Case #"<<k<<":"<<endl;
    cout<< fixed <<setprecision(10)  <<   ((x1+x2)/2)<<" "<<((y1+y2)/2)<<" 0"<<endl;
    cout<<  fixed <<setprecision(10)  <<    ((x3+x2)/2)<<" "<<((y3+y2)/2)<<" 0"<<endl;
    cout<<"0 "<<"0 "<<"0.5"<<endl;
    }
return 0;}

