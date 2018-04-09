
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
long long t,n,i;
cin>>t;
while(t--){
cin>>n;
long long int arr[n],count=0,nc=0;
for(i=0;i<n;i++){
    cin>>arr[i];
}
long long int narr[n];
for(i=0;i<n;i++){
    if(arr[i]%2==0){

        narr[count]=arr[i];
        count++;}

}
long long int p;
for(i=0;i<count;i++){
        if(narr[i]>1 && narr[i]%2==0)
  {

   narr[i]= narr[i]/2;i--;nc++;}



}
if(nc%2==0){cout<<"2"<<endl;}
else cout<<"1"<<endl;




}
return 0;}
