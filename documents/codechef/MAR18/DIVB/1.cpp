#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
long long n;
cin>>n;
int fing[n];
int length[n];
for(int i=0;i<n;i++)
{
    cin>>fing[i];
}
for(int i=0;i<n;i++){
    cin>>length[i];
}


string ans[]={"front","back","both","none"};
int f=0,b=0;
for(int i=0;i<n;i++){
    if(f==0 && fing[i]>length[i]){f=1;}
    if(b==0 && fing[i]>length[n-i-1]){b=1;}

}
if(f==0 && b==0){cout<<ans[2]<<endl;}
else if(f==0){cout<<ans[0]<<endl;}
else if(b==0){cout<<ans[1]<<endl;}
else {cout<<ans[3]<<endl;}



    }
return 0;}

