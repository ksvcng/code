#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
        string s;
        long long count=0;
        //cin.sync();
       // getline(cin,s);
        cin>>s;
        int n=(s.length()-3);
        //cout<<n<<endl<<s<<endl;
        if(n<1){cout<<"normal"<<endl;}
        else{
        for(int i=0;i<n;i++)
        {
                if(s[i+0]=='c' || s[i+0]=='h' || s[i+0]=='e' || s[i+0]=='f' ){
                if(s[i+1]=='c' || s[i+1]=='h' || s[i+1]=='e' || s[i+1]=='f' ){
                if(s[i+2]=='c' || s[i+2]=='h' || s[i+2]=='e' || s[i+2]=='f' ){
                if(s[i+3]=='c' || s[i+3]=='h' || s[i+3]=='e' || s[i+3]=='f' ){
                if(s[i+0]!=s[i+1] && s[i+0]!=s[i+2] && s[i+0]!=s[i+3]){
                                  if(s[i+1]!=s[i+2] && s[i+1]!=s[i+3]){
                                                    if(s[i+2]!=s[i+3]){count++;}
                    }
                }
            }
            }
            }
            }
        }
        if(count>0){cout<<"lovely "<<count<<endl;}
        else{cout<<"normal"<<endl;}
        }
    }
return 0;}

