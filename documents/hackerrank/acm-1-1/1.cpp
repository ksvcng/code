#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
int t,n,i;
cin>>t;
while(t--){
        cin>>n;
        int arr[n-1];
        for(i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        int j=1;
        sort(arr,arr+(n-1));
        for(i=0;i<n;i++)
        {
           if(arr[i]==j)
            j++;
           else{
            cout<<j<<endl;
           break;}
        }


}



return 0;}
