#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{    int t;
    cin>>t;
    while(t--){
            long n,p,q,x,i,j,l,r,l1,r1,temp;
    cin>>n>>p>>q;
    long arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
       long  nq= (floor(q/64)+2);//cout<<" nq = "<<nq;
       long b[nq];
            for(i=0;i<nq;i++){cin>>b[i];}
           // cout<< " elements of array b are : ";
            //  for(i=0;i<nq;i++){cout<<b[i]<<" ";}

            for(i=0;i<nq;i++){
                 long   ans=1;
                    if(i==0){x=0;}
                if(i%64==0){
                      //  cout<<" i divisible by 64 ";
                    l=(b[i/64]+x)%n;
                    r=(b[(i/64)+1]+x)%n;
              //  cout<<" l= "<<l<<" r= "<<r;
                }
                else{
                   //  cout<<" i divisible not  by 64 , i= "<<i<<" x= "<<x<<"old l= "<<l<<"old r= "<<r;
                    l1=(l+x)%n;
                    r1=(r+x)%n;l=l1;r=r1;
                   // cout<<" l= "<<l<<" r= "<<r;
                }
                if(l>r){
                    temp=l;
                    l=r;
                    r=temp;
                }
               // cout<<" l= "<<l<<" r= "<<r;
                for(j=l-1;j<r;j++){
                    ans=(ans*arr[j])%p;
                }
               // cout<<" ans= "<<ans;
                x=(ans+1)%p;
               // cout<<" x= "<<x;
            }

            cout<<x%p<<endl;
        }
return 0;}

