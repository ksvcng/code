#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
  // t=1;
    while(t--){
int m,n;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

int flag=0;
if(arr[0][0]==-1){arr[0][0]=1;}
for(int i=0;i<n;i++){if(arr[i][0]==-1){arr[i][0]=arr[i-1][0];}}
for(int i=0;i<m;i++){if(arr[0][i]==-1){arr[0][i]=arr[0][i-1];}}


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==-1){arr[i][j]=max(arr[i][j-1],arr[i-1][j]);}
    }
}

for(int i=0;i<n;i++){
    for(int j=1;j<m;j++){
            if(arr[i][j]<arr[i][j-1]){flag=1;break;}
    }
    if(flag==1){break;}
}
    if(flag==0){
    for(int i=0;i<m;i++){
    for(int j=1;j<n;j++){
        if(arr[j][i]<arr[j-1][i]){flag=1;break;}
    }
            if(flag==1){break;}

    }
    }
    if(flag==1){cout<<"-1"<<endl;}
    else{
        for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){cout<<arr[i][j]<<" ";}
    cout<<endl;
        }
    }
    }

return 0;}

