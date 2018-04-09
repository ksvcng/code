#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
int ar[30],count=0,flag=0;
for(int i=0;i<30;i++){
    cin>>ar[i];
    if(ar[i]==1){count++;if(count==6){flag=1;}}
    else{count=0;}
}
if(flag==1){cout<<"#coderlifematters"<<endl;}
else{cout<<"#allcodersarefun"<<endl;}

    }
return 0;}

