#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{    int t,n,i,pointer=0,p=0,q=0,lb=0,rb=0;
    cin>>t;
    while(t--){
       cin>>n;
       string s;
       cin>>s;
       string column[201];
       column[100]=s[0];pointer=100;
      /** for(i=0;i<s.length();i++){
            if(s[i]=='('){lb++;i++;}
            else if(s[i]==')'){rb++;i++;}
            if(lb==rb){pointer=temp;}
            else if(s[i]!='.')
            {
                column[pointer-1]+="s[i]";temp=pointer;pointer=pointer-1;

            }


       } */
     //  char a='b';
      // int p=a;
      // cout<<p;

     //for(i=0;i<127;i++){cout<<child[i][i]<<" ";}




    }
return 0;}
