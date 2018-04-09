
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
 int t,j;
cin>>t;
for(j=0;j<t;j++){
        unsigned long long int a,b,c,d,ans=1,i;
    cin>>a>>b;
//if(b<a){break;}
//else{
c=b-a;
if(c>=10)
{
    cout<<"0"<<endl;continue;
}
if(c==0) {cout<<"1"<<endl;continue; }
d=b%10;
if(d<(a+1)%10){cout<<"0"<<endl;continue;}

for(i=d;i>=((a+1)%10);i--)
{
    ans=ans*i;
}
cout<<(ans%10)<<endl;

//}
}

return 0;}
