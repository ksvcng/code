#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 long long int t;
 cin>>t;
 while(t--)
 {
    long long int n,c=0,ans,d;
    long long int k=0,i,j=0,z;
    int flag=0;
    int slag=0;
    int dlag=0;
    cin>>n;
    int a[n+1];
    int b[n];
      b[0]=0;
      b[1]=0;
    for ( i=1;i<=n;i++)
      {
      cin>>a[i];
      if(a[i]==0)
        {
         b[j]=i;
         j++;
         flag=1;
        }
       if(flag==1 && a[i]==1 && slag==0)
        {
         c=i;
         flag=2;
         slag=1;
        }

      }

        k=j;
         long long int p=((i+1)-k)-b[0];
         long long int ex=(c-b[0]-1);
         ans=(p-1+ex);
         if(a[1]==0){
         for(z=1;z<=n;z++)
         {
             if(a[z]==0 && dlag==0)
             {
                 d=0;

             }
             else
             {
              d=1;
              dlag=1;
             }

         }
         }
         else{
          dlag=0;
         for(z=1;z<=n;z++)
         {
             if(a[z]==1 && dlag==0)
             {
                 d=0;

             }
             else{

                d=1;
                dlag=1;
             }
         }
         }
         if (d==0)
         {
             ans=d;
         }
         else
         {
           if(ans>=0)
                ans=ans;
           else
             ans=0;


         }
      cout<<ans<<endl;
      }

 return 0;
 }
