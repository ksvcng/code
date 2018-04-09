#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    //cin>>t;
    t=1;
    while(t--){
            int count=0;
    string s;
    cin>>s;
    string s1="";
    int n=s.length();
    for(int i=0;i<=n/2;i++){
        s1+=s[i];
        string temp="";
        int size=i+1,k=0;
        for(int j=i+1;j<n;j++){
            temp+=s[j];k++;
            if(k==size){break;}
        }
if(s1==temp){count++;}
    }
cout<<count<<endl;

    }
return 0;}

