#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
   int n,m;
   cin>>n>>m;
  int  a [n];
  int b[m];
  int bd=0;
    for(int i=0;i<n;i++){
        cin>>a[i];bd+=a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }



int    sum1=a[0],sum2=0,j=0,count=0,k=1;
    while(1){
           // cout<<sum1<<" "<<sum2<<endl;
        if(sum1<sum2){sum1+=a[k];k++;}
        else if(sum1>sum2){sum2+=b[j];j++;}
        if(sum1==sum2){count++;sum1=0;sum2=0;if(j<m && k<n){sum1+=a[k];sum2+=b[j];k++;j++;}
        else{break;}}
        //if(sum1==bd && sum2==bd){break;}
       // cin>>t;
       // cout<<k<<" "<<j<<endl;
      // cout<< count<<endl;
    }
cout<<count;

return 0;}

