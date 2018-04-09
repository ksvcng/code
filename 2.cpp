#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
long long sum=0;
for(int i=0;i<n;i++){cin>>arr[i];sum+=arr[i];}

long long count=sum/n;
count++;
cout<<count;




    return 0;
}
