#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
cin>>n;
string s;
cin>>s;
string st[]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon"," sylveon"};
int c[8]={0,0,0,0,0,0,0,0};
for(int i=0;i<n;i++){
    if(s[i]!='.'){
        for(int j=0;j<8;j++){if(s[i]==st[j][i]) c[j]++; }
    }
}
int max=0;
for(int i=0;i<8;i++){
    if(c[i]>max){max=i;}
}
cout<<st[i];



return 0;}

