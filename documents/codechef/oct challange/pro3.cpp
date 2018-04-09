#include<iostream>
#include <math.h>
using namespace std;
int main(){
int t,i,n,each,rem,sum;
unsigned long long int  maxi;

cin>>t;
while(t--){
    cin>>n;
    int arr[n];
    maxi=pow(2,32)-1;
    cout<<maxi<<endl;;
    each=maxi/n;
    rem=maxi%n;
    arr[0]=each+rem+n;
    sum=arr[0];
    for(i=1;i<n;i++){
        arr[i]=each;
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}
return 0;}





