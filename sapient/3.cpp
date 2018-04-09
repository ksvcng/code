#include<bits/stdc++.h>
#define f( a,b) for(int i=a;i<b;i++)
#define f1( a,b) for(int j=a;j<b;j++)
#define nl cout<<endl;
#define sp cout<<" ";
#define vect(c) vector<int> c;
#define vect1(n,s) vector<int> n(s);
#define co cout<<
#define cn cin>>
#define pu(a,b) a.push_back(b);
#define input freopen ("input.txt","r",stdin);
#define output freopen("output.txt","w",stdout);

using namespace std;
int main()
{
   int  n,count=0;
   long long rsum=0,lsum=0;
   cn n;
   long long cord[n],height[n];
   f(0,n){cn cord[i]>>height[i];}
   rsum=cord[0];
   f(1,n-1){if(height[i]<((cord[i])-rsum))// || if(height[i]<((cord[i])-cord[i])){}}
                      {count++;rsum=cord[i]; }
              else if(height[i]<(cord[i+1]-cord[i])){
                count++;rsum=cord[i]+height[i];
              }
               else{rsum=cord[i];}

        }
        cout<<count+2;
return 0;}

