#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
            int n;
string s;
cin>>s>>n;
int flag=0;
if(s.length()%n!=0){cout<<"NO"<<endl;}
else{
    int itt=s.length()/n;
    for(int i=0;i<=itt/2;i++){
        for(int j=0;j<n;j++){
          if(  s[i+itt*j]!=s[(j+1)*(itt)-1-i]){flag=1;break;}
        }
        if(flag==1){break;}
    }
    if(flag==0){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;

}


    }
return 0;
}
