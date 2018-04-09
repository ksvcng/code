
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
   string s;
   cin>>s;
   int count=0,flag=0;
   for(int i=0;i<s.size()-1;i++){if(s[i]=='1' && s[i+1]=='1'){flag=1;}
   if(s[i]=='1'){count++;s[i]='j';s[i+1]='j';}
   }
   s[0]='j';
   if(s[s.size()-1]=='1' || s[0]=='1'){flag=1;}
   if(flag==1 || (s.size()-count)-count<=0){cout<<"-1";}
   else{
        cout<<(s.size()-(2*count+1))+1 <<endl;
        cout<<2*count+1<<" ";
        for(int i=0;i<s.length();i++){if(s[i]=='j'){cout<<(i+1)<<" ";}}
        cout<<endl;
        for(int i=0;i<s.length();i++){
                if(s[i]!='j'){
            cout<<"1 "<<(i+1)<<endl;}
        }
   }
return 0;}

