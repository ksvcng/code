#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,q;
cin>>n>>q;
string s[n],pppp;
pppp=std::bitset<31>(q).to_string();

for(int i=0;i<n;i++){
    int a;
    cin>>a;
    s[i] = std::bitset<31>(a).to_string();
    cout<<s[i]<<endl<<pppp<<endl<<endl;
}
int ac[n][31];//cout<<"kk";
for(int i=0;i<n;i++){
        for(int j=0;j<31;j++){
    ac[i][j]=0;}
}
int x=0;
    for(int k=0;k<31;k++){x=0;
            for(int i=0;i<n;i++){
        if(s[i][k]=='1'){x++;ac[i][k]=x;}
        else ac[i][k]=x;
        }
   }
while(q--){
         bitset<31> st;
        long long l,r;
        cin>>l>>r;
        int value=r-l+1;
         l--;r--;
int  tt[31];
for(int i=0;i<31;i++){tt[i]=0;}
int inc;
for(int i=0;i<31;i++){
        if(s[l][i]=='1'){inc=1;}
        else{inc=0;}
    tt[i]=(ac[r][i]-ac[l][i]+inc);
}
for(int i=0;i<31;i++){
    if(tt[i]<(value-tt[i])){st[30-i]=1;}
}
unsigned long decimal = bitset<31>(st).to_ulong();
cout<<decimal<<endl;
}
return 0;}
