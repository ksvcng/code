#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
int n,m;
cin>>n>>m;
int mid=0;

int low[m],high[m];
int fh[m],lh[m];
for(int i=0;i<m;i++){fh[i]=0;lh[i]=0;}
//long long fh=0,lh=0;
for(int i=0;i<m;i++){cin>>low[i]>>high[i];}
int score[n][m];int kk=0,ll=0;
for(int i=0;i<n;i++){for(int j=0;j<m;j++){
        cin>>score[i][j];
if(i<n/2){fh[j]+=score[i][j];}
else {
        lh[j]+=score[i][j];
     }
}}

if(n%2!=0){
        //cout<<"loop "<<n/2<<" ";
    for(int i=0;i<m;i++){
      //  cout<<"  "<<m<<" lh[m]= "<<lh[m]<<" score[n/2][m]= "<<score[n/2][m]<<endl;
        lh[i]=lh[i]-score[n/2][i];}

}
//for(int i=0;i<m;i++){cout<<fh[i]<<"  "<<lh[i]<<endl;}

int aa[m];
for(int i=0;i<m;i++){
    if(fh[i]>lh[i]){aa[i]=high[i];}
    else{aa[i]=low[i];}
}
//for(int i=0;i<m;i++){int p=(high[i]-low[i])/2;cout<<low[i]+p<<" ";}
for(int i=0;i<m;i++){cout<<aa[i]<<" ";}
cout<<endl;


    }
return 0;}

