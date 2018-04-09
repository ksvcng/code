#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
double x;
cin>>x;
if(x==0){cout<<"0"<<endl;}
else if(x==1){cout<<"1"<<endl;}
else {
       // cout<<"jp";
       double xx=8*x;
    xx++;
//cout<<xx<<"  ";
    double mn=sqrt(xx);
   // cout<<mn<<"  ";
    mn--;
    mn=mn/2;
   // cout<<mn<<endl;
    long long c=ceil(mn);
    long long f=floor(mn);
    long long maxm,minm;
    maxm=(c*(c+1))/2;
    minm=(f*(f+1))/2;

    long long p=maxm-x;
    long long q=x-minm;
    //cout<< c <<"  " <<f <<"  " <<p <<"  "<<q <<"   ";
    if(p<q){cout<<c+p<<endl;}
    else{cout<<f+q<<endl;
}

}


    }
return 0;}

