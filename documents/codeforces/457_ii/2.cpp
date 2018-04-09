#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long  int n,k;
cin>>n>>k;
long long arr[61];
for(int i=0;i<61;i++){arr[i]=pow(2,i);}
if(n<k){}
else {
        int i=0;
    while(k*arr[i]<=n){i++;}
    int j=i;

    while(arr[j]*k<=n){j--;}


}


return 0;}

