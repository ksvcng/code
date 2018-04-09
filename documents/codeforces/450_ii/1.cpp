#include<bits/stdc++.h>
using namespace std;
int main()
{
long n,cp=0,cn=0,i,x,y;
cin>>n;
for(i=0;i<n;i++){cin>>x>>y;if(x>0){cp++;}else cn++;}
if(cp<=1 && cn>=1 || cn<=1 && cp>=1 ){cout<<"yes";}
else{cout<<"no";}
return 0;}

