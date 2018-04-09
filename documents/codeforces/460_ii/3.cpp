#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
#define found 10
using namespace std;
int disitSum(int x){
    int ans=0,temp;
while(x!=0){
    ans+=x%10;
    x/=10;
}
return ans;
}
int main()
{   long long int k;
cin>>k;
int count=0,start=18;
while(count!=k){
    if(disitSum(start)==found){count++;}
    start++;
}
cout<<start-1;

return 0;}

