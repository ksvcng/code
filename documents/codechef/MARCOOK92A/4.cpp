#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
long long k, n,m;
cin>>n>>m>>k;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
vector< pair<long ,long> > l;
vector< pair<long ,long> > d;
for(int i=0;i<m;i++){
    char a;
    long long b,c;
    cin>>a>>b>>c;
    if(a=='I'){l.push_back(make_pair(b,c));}
    else{d.push_back(make_pair(b,c));}
}
for(int i=0;i<l.size();i++){
for(int j=l.first;j<l.second;j++){

}
}


    }
return 0;}

