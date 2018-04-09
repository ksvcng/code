
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
    int j=1,k=2;
    for(i=0;i<n-2;i++){
               if( arr[i]+arr[k]==arr[j] ){count++;}
                    k++;
                if(k==n){   if(j==n-2){i++;j=i+1;k=j+1;}
                            else{j++;i=j+1;}
                        }
            i--;
        }
         cout<<count<<endl;
}

return 0;}



