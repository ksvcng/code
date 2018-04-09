#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 long long int t;
 cin>>t;
 while(t--)
 {
     long long n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     long long count=0;
     sort(arr,arr+n);
     for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])count++;
     }

cout<<count<<endl;

    }
 return 0;
 }
