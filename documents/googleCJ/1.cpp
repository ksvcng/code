#include<bits/stdc++.h>
#define input freopen ("jam1.txt","r",stdin);
#define output freopen("jam01.txt","w",stdout);
using namespace std;
int main()
{

    int t;
    cin >>t;
   for(int k=1;k<=t;k++){
long long n,sum=0,count1=0,ch=0,sh=0,flag=0;
string s;
cin>>n>>s;
for(int i=0;i<s.length();i++){
        if(s[i]=='C')ch++;
        else {sh++;sum+=pow(2,ch);} }
if(sh>n){cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;}
else if(sum<=n){cout<<"Case #"<<k<<": 0"<<endl;}
else{
long long len=s.length(),ans=0,curr=len-1,x=0,PP=0,QQ=0;
for(int j=curr;j>0;j--){PP++;
        sum=0,sh=0,ch=0,x=0;
        if(s[j]=='S' && flag==0){curr=j;flag=1;}
    if(s[j]=='S' && s[j-1]=='C'){
            swap(s[j],s[j-1]);count1++;flag=0;x=1;
    for(int i=0;i<s.length();i++){if(s[i]=='C')ch++;else {sh++;sum+=pow(2,ch);}}
    if(sum<=n){break;}
    }
        if(x==1){j=curr+1;}
}
cout<<"Case #"<<k<<": "<<count1<<endl;cout<<PP<<endl;
}

    }
return 0;}

