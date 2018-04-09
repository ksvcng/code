#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
long long n;
cin>>n;
double loss=0.0;
//long long item[n],price[n],discount[n];
for(int i=0;i<n;i++){
   // cin>>item[i]>>price[i]>>discount[i];
   long long p,it,d;
    cin>>p>>it>>d;
    double newprice,sellprice,disc;
    disc=(double)p*d/100;
    newprice=(double)(p+disc);
    disc=(double)newprice*d/100;
    sellprice=newprice-disc;
    sellprice=p-sellprice;
    loss=loss+(double)(it*sellprice);
 //   cout<<loss<<" ";
}

cout<< fixed << setprecision(18) << loss <<endl;



    }
return 0;}

