
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
long long t,a,c,d,k,i;
cin>>t;
while(t--){
    cin>>a>>c>>d>>k;
    for(i=0;i<=100;i++){
       if( (a*pow(i,3)+(c*i)+d)>=k){
        cout<<i<<endl;
       break;}
    }

}
return 0;}
