//Zonal Computing Olympiad 2013, 10 Nov 2012.   Tournament Problem Code: ZCO13001
#include<iostream>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,i,j;
    long long sum=0;
    cin>>n;
   // if(n<2){exit(0);}
    int ts[n];
    for(i=0;i<n;i++){cin>>ts[i];}
  //  int total=(n*(n-1))/2;
    sort(ts,ts+n);
     j=n-1;
    int arr[j];
    for(i=0;i<j;i++){arr[i]=ts[i+1]-ts[i];}

    for(i=0;i<n-1;i++){
        sum=sum+(i+1)*arr[i]*j;
        j--;
    }
    cout<<sum;
return 0;
}
