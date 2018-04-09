#include<bits/stdc++.h>
using namespace std;
int main()
{
     // long long int t;
      int n,m,a,b,i,flag=0,temp,l=0;
      cin>>n>>m;
      temp=m;
      for(i=0;i<n;i++){
        cin>>a>>b;
        if(flag==0){
                if(b>=m){l=b;}
                            if(i==0 && a!=0){flag=1;}
                                if(i==n-1 && l<m){flag=1;}
           if(i==0){temp=b;}
           else{
        if(a>temp){flag=1;}
        else{
               if(b>temp)
                temp=b;}
        }
        }
      }
//if(b<m){flag=1;}
      if(flag==1){cout<<"NO";}
      else{cout<<"YES";}


return 0;}

