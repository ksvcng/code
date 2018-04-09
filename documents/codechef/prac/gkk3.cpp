#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 long long int t;
 cin>>t;
 while(t--)
 {
     long long int n,i=0;
     long long int count=0,c=0,d=0,b=0;
     cin>>n;
     int r=sqrt(n);

     for(b=2;b<=r;b++){
          d=b;
     while(n>=b)
     {

         b=b*d;
     }
      c=b/d;

       if(n<(2*c))
       {
           count++;
       }
        b=d;
      }
      for(i=r+1;i<=n;i++)
      {

          if(n<(2*i))
       {
           count++;
       }
      }
      cout<<count<<endl;
 }

 return 0;
 }
