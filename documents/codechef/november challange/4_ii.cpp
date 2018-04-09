#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
long  n,q,l,r,j,i;
    cin>>n>>q>>l>>r;
    long  arr[n];
   for(i=0;i<n;i++){arr[i]=0;}
for(i=0;i<n;i++){cout<<arr[i]<<" ";}
    while(q--){
            long  c,x,y,count=0,p=0;
            long c1=0,c2=0,s=0;
            cin>>c>>x>>y;
            if(c==1){arr[x-1]=y;for(i=0;i<n;i++){cout<<arr[i]<<" ";}}
            else{
                    long long ans=0;
                    i=x-1;
              //  cout<<"you are in second loop "<<"value of i= "<<i;
                while(i<y){
                    c1=0,c2=0,p=0,s=0;

                while(arr[i]<=r){
                                    cout<<"loop enter"<<" i= "<<i;
                        if(arr[i]>=l && arr[i]<=r)
                            {c1++;p++;s=s+p-1;cout<<" c1 = "<<c1;}
                         else{ c2++;cout<<" c2 = "<<c2;}
                         i++;if(i==y){break;}
                         }
                       //  cout<<" c1 = "<<c1<<" c2= "<<c2;
                       cout<<" c1 = "<<c1<<" c2 = "<<c2 <<" s = "<<s<<" ans = "<<ans<<" ";
                         ans=ans+(c1+c2)*c1-s;cout<<"ans = "<<ans<<" ";
                         if(i<y){
                         while(arr[i]>r){i++;if(i==y){break;}}}

                }
                //cout<<" and last element is = "<<i;
                cout<<ans<<endl;
            }

    }


return 0;}


