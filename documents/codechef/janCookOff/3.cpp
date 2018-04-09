#include<bits/stdc++.h>
#define mam 100001
using namespace std;
int main()
{
    int n,k1,k,i,j,bk[mam][51]={0},g[51],in,a[mam],val;
   cin>>n>>k1;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<=50;i++)
   {
       g[i]=-1;
   }
   for(i=n-1;i>=0;i--)
   {
       for(j=0;j<=k1;j++)
       {
           for(k=0;k<=50;k++)
           {
               in=g[k];
               if(in!=-1){
                   if(j>=abs(a[i]-k))
                   {
                       val=j-abs(a[i]-k);
                       bk[i][j]=max(bk[i][j],bk[in][val]+1);
                   }
               }

           }
       }
       g[a[i]]=i;
   }
   cout<<bk[0][k1]+1;
  // cin>>n;
}
