#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   double  a,b,c,d;
    cin>>a>>b>>c;
    d=(a/(b));
    //d+=d;
  // int e = 10;
stringstream ss,sc;
ss << d;
sc << c;
string ssc = sc.str();
string str = ss.str();
str+="000";

cout<<ssc<<endl;
cout<<str<<endl;
long i=0,j,ans,temp=0;
while(str[i]!='.'){i++;}
for(j=i;j<str.length();j++){if(str[j]==ssc[0]){temp=1;ans=j-i;break;}}
if(temp==1){cout<<ans;}
else cout<<"-1";

return 0;}

