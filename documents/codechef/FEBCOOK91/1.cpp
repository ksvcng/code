#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;

long long n;
cin>>n;
int s[n][5];
for(int i=0;i<n;i++){
    for(int j=0;j<5;j++){
        cin>>s[i][j];
    }
}
for(int i=0;i<n;i++){
        int count=0;
    for(int j=0;j<5;j++){
        if(s[i][j]==1){count++;}
    }
    if(count==0){cout<<"Beginner"<<endl;}
    if(count==1){cout<< "Junior Developer"<<endl;}
    if(count==2){cout<<"Middle Developer"<<endl;}
    if(count==3){cout<<"Senior Developer"<<endl;}
    if(count==4){cout<<"Hacker"<<endl;}
    if(count==5){cout<<"Jeff Dean"<<endl;}
}



return 0;}

