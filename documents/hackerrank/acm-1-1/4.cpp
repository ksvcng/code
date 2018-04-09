
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    int t,i,j,k;
cin>>t;
while(t--){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
               if( arr[i]+arr[k]==arr[j] )
               {

                count++;

               }
            }
           // cout<<count<<" " ;
        }
       // cout<<count<<" " ;
    }
    cout<<count<<endl;


}

return 0;}

