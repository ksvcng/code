#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
long long f(long long l,long long m,long long o,long long p,long long r);
int main()
{   long long int t,n,i,q,nt,j;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[4*n],z=1;
        for(i=0;i<4*n;i++){
           // cin>>a0>>a1>>a2>>a3;
           // a[i]=a0;a[i+1]=a1;a[i+2]=a2;a[i+3]=a3;
           cin>>a[i];
        }
       // cout<<" all function input are completed "<<endl<<" now enter no. of query = ";
        cin>>q;
        for(i=0;i<4*n;i++){
            if(a[n*i+2]==0 && a[n*i+3]==0){z=z*1;}
            else{z=z*0;}
                i=i+4;
        }
        if(z==1){

            for(i=0;i<q;i++)
        }

        for(i=0;i<q;i++){
            cin>>nt;
            if()
         //   cout<<" input no. "<<i<<" insertion complete and input is = "<<nt;
            long long min=10000000000000000,k=0;
            for(j=0;j<n;j++){
                    long long ans=f(a[k],a[k+1],a[k+2],a[k+3],nt);k=k+4;
                    //cout<<ans<<endl;
                if(ans<min){min=ans;}
            }
            cout<<min<<endl;
        }


    }
return 0;}


long long f(long long l,long long m,long long o,long long p,long long r){
   // cout<<l<<" "<<m<<" "<<o<<" "<<p<<" "<<r;
   // cout<<" ans ="<<(p*pow(r,3)+o*pow(r,2)+m*r+l);
    return( p*pow(r,3)+o*pow(r,2)+m*r+l);
}



