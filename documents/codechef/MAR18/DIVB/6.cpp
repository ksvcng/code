#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
long long n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
int ans[n];
for(int i=0;i<n;i++){ans[i]=0;}
for(int i=0;i<n;i++){
       int sum1=0,sum2=0;
    for(int k=i+1;k<n;k++){
        sum2+=arr[k];ans[k]++;
        if(sum2>arr[i]){break;}
    }
    for(int l=i-1;l>=0;l--){
        sum1+=arr[l];ans[l]++;
        if(sum1>arr[i]){break;}
    }

}

for(int i=0;i<n;i++){cout<<ans[i]<<" ";}
cout<<endl;

    }
return 0;}

