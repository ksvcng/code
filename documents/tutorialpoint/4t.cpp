
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    int t,i,j,k,l;
cin>>t;
while(t--){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(l=0;l<n;l+=n/6)

    {    cout<<"arr[l]= "<<&arr[l]<<"  ";

    }
    cout<<endl;

    for(i=0;i<n-2;i++){
            k=i+2;
            for(j=i+1;j<n-1;j++){
               if( arr[i]+arr[k]==arr[j] ){count++;}
               k++;
               if(k==n){j++;k=j+1;}
               j--;

                  }

        }
         cout<<count<<endl;
}

return 0;}



