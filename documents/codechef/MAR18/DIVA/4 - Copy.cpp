#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
 if(y==0)
 return x;
 else
 return (gcd(y,x%y));
}
int main()
{   long long n,q;
cin>>n;
int arr [n];
for(int i=0;i<n;i++){cin>>arr[i];}
cin>>q;
while(q--){
    long long op,l,r,d;
    cin>>op;
    if(op==1){cin>>l>>r;arr[l-1]=r;}
    else{
        cin>>l>>r>>d;
            int v=0;
        for(int i=l-1;i<r;i++){
            if(gcd(arr[i],d)==1){v++;}
        }
        cout<<v<<endl;
    }
}
return 0;}

