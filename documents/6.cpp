#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int arr[m][n][n],i,j,k,ans=0;
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        for(k=0;k<n;k++){
            cin>>arr[i][j][k];
        }
    }

}
i=0;j=n;k=n;

for(i=0;i<m;i++){

    cout<<j<<" "<<k<<endl;//ans+=arr[m][j-1][k-1];
    k--;

    if(k==0){j--;k=n;}
    if(j==0){i=m+1;cout<<"-1 -1"<<endl;}

}








return 0;}
