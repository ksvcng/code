#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
long long calc(int a,int b,int c, int d, int e ,int f ,int l, int r){
long long ans;
long long up,down;
up=((2*(a-d)*pow(r,3))+(3*(b-e)*pow(r,2))+(6*(c-f)*r));
down=((2*(a-d)*pow(l,3))+(3*(b-e)*pow(l,2))+(6*(c-f)*l));
 ans=up-down;
if(ans<0){ans=ans*(-1);}
return ans;
}


int main()
{   long long int t;
    cin>>t;
    while(t--){
int a,b,c,d,e,f;
cin>>a>>b>>c>>d>>e>>f;
int l,r;
cin>>l>>r;
long long p,q;
p=calc(a,b,c,d,e,f,r,l);
q=6;
for(int i=2;i<=6;i++){
    if(p%i==0 && q%i==0){p=p/i;q=q/i;}

}
cout<<p<<"/"<<q<<endl;

    }
return 0;}

