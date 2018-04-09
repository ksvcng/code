#include<bits/stdc++.h>
using namespace std;
int value(char c){
string alp="abcdefghijklmnopqrstuvwxyz";
int i;
for( i=0;i<26;i++){if(c==alp[i]) break;}
return i;
}
int main()
{   long long int t;
    cin>>t;
    while(t--){
string s;
cin>>s;
int n=s.length();
int v[26];
for(int i=0;i<26;i++){v[i]=0;}
vector< vector<int> > pos(26 );
for(int i=0;i<n;i++){
    int temp=value(s[i]);pos[temp].push_back(i);
    v[temp]+=1;
}

int count=0,oi=0;
for(int i=0;i<26;i++){if(v[i]%2!=0){count++;oi=i;}}
if(count>1){cout<<"-1"<<endl;}
else{
int r=n-1,l=0;
int arr[n];for(int i=0;i<n;i++){arr[i]=0;}
        if(n%2==0){
                for(int i=0;i<26;i++){
                    if(!pos[i].empty()){
                    for(int j=0;j<pos[i].size();j=j+2){arr[l]=pos[i][j]+1;arr[r]=pos[i][j+1]+1;l++;r--;}
                                        }
                }
        }
        else{
for(int i=0;i<26;i++){
                    if(!pos[i].empty() && i!=oi){
                    for(int j=0;j<pos[i].size();j=j+2){arr[l]=pos[i][j]+1;arr[r]=pos[i][j+1]+1;l++;r--;}
                                        }
                }
for(int j=0;j<pos[oi].size();j++){arr[l]=pos[oi][j]+1;l++;}
        }
for(int i=0;i<n-1;i++){cout<<arr[i]<<" ";}
cout<<arr[n-1]<<endl;
    }
            }
return 0;}

