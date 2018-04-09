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
        if(arr[j]%2==0)
        {
            count++;
        }
    }
    count=count*(n-count);
    cout<<count<<endl;

}



return 0;}

