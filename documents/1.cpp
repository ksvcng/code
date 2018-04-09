#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
int i,p=0,count1=0,count2=0;
    cout<<count1;

for(i=0;i<s.size();i++)
{
    if(s[i]=='A')
    {count1++;    cout<<"a";}
    else if(s[i]=='B'){count2++;}
    else
   {
      while(s[i]=='.'){p++;i++;}
        if(s[i-p-1]=='A' && s[i]=='A'){count1=count1+p;}
         else if(s[i-p-1]=='B' && s[i]=='B'){count2=count2+p;}
           p=0;i--;}
}
cout<<count1<<" "<<count2<<endl;
    }
    return 0;
    }
