#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
int t;
long long n,i,j;
cin>>t;
while(t--){
        long long count=0;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(j=0;j<n;j++){
        for(i=j+1;i<n;i++){
            if((arr[i]-arr[j])%2!=0)
                count++;
        }
    }
    cout<<count<<endl;

}



return 0;}

