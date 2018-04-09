#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
int n,m,x,k,even=0,odd=0,of=0,ef=0,flag=0;
cin>>n>>m>>x>>k;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]=='E'){even++;}
    else{odd++;}
}
for(int i=1;i<=m;i++){

    if(i%2==0){
            if(ef==0){
                if(even>x){even-=x;n-=x;}
                else{n-=even;even=0;ef=1;}
            }

    }
    else{
            if(of==0){
        if(odd>x){odd-=x;n-=x;}
        else{n-=odd;odd=0;of=1;}
            }
    }

if(n<=0){flag=1;break;}
else if(of==1 && ef==1){flag=0;break;}

}

if(flag==1){cout<<"yes"<<endl;}
else{cout<<"no"<<endl;}


    }
return 0;}

