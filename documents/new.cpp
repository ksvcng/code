#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t,n,i;
    cin>>t;
    while(t--){
       cin>>n;
       long long a[n],b[n],b1[n],rem[n],rm[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        b1[i]=b[i];
    }
    for(i=0;i<n;i++){
      rm[i]=a[i]%b[i];

    }
    sort(b1,b1+n);
    long long max=b1[0],j=0,ans[max];
    for(i=0;i<max;i++){ans[i]=0;}
    for(i=0;i<n;i++){
        if(j-rm[i]<0){/**cout<<"j= "<<j<<" rm["<<i<<"]="<<rm[i];*/ans[j]+=j-rm[i]+b[i];}
        else {/**cout<<"j= "<<j<<" rm["<<i<<"]="<<rm[i];*/ans[j]+=j-rm[i];}
        // cout<<"ans["<<j<<"]= "<<ans[j]<<"  ";
        if(i==n-1){j++;i=-1;}

        if(j==max)break;
    }
    sort(ans,ans+max);
    cout<<ans[0]<<endl;
    }
return 0;}
