#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    //cin>>t;
    t=1;
    while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
long long sum=0,curr=0;

sort(arr, arr+n);
curr=arr[n-1];
//for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
//cout<<curr;
sum=arr[n-1];
//cout<<sum<<endl;
for(int i=n-2;i>=0;i--){
    if(arr[i]<curr){sum+=arr[i];curr=arr[i];}
    else{
            curr--;
            if(curr>0)
        {sum+=curr;}

    }
    //cout<<sum<<endl;
}

cout<<sum<<endl;
    }
return 0;}

