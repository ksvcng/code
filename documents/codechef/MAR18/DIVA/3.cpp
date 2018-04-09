#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
long long n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

int voteCount[n];
for(int k=0;k<n;k++){voteCount[k]=0;}
for(int i=0;i<n;i++){
    int s=0,x=0,j=i+1,k=i-1;
    while(x==0 && j<n){
        voteCount[j]++;
        s+=a[j];j++;
        if(s>a[i] ){x=1;}
    }
    x=0;s=0;
    while(x==0 && k>=0){

                voteCount[k]++;
            s+=a[k];k--;
            if(s>a[i]){x=1;}


    }
   // for(int i=0;i<n;i++){cout<<voteCount[i]<<" ";}cout<<endl;
}

for(int i=0;i<n;i++){cout<<voteCount[i]<<" ";}
cout<<endl;
    }
return 0;}

