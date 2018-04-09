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
            int n,m,na=0,ng=0,i,j,ans=0,ans1=0;
    cin>>n>>m;
    char arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
            //if(arr[i][j]=='R')na++;
            //else ng++;
        }
    }

//cout<<na<<" "<<ng;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(i%2==0){
                if(j%2==0){
                        if(arr[i][j]=='G')
                            ans=ans+3;
                        }
                    else if(arr[i][j]=='R')
                        ans=ans+5;

                }
                else{
                    if(j%2==0){
                        if(arr[i][j]=='R') ans=ans+5;
                    }
                    else if(arr[i][j]=='G') ans=ans+3;
                }

    }
}



for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(i%2!=0){
                if(j%2==0){
                        if(arr[i][j]=='G')
                            ans1=ans1+3;
                        }
                    else if(arr[i][j]=='R')
                        ans1=ans1+5;

                }
                else{
                    if(j%2==0){
                        if(arr[i][j]=='R') ans1=ans1+5;
                    }
                    else if(arr[i][j]=='G') ans1=ans1+3;
                }

    }
}

if(ans1<=ans)cout<<ans1;
else cout<<ans;
cout<<endl;


    }
return 0;}


