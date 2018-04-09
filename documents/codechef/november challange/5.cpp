#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{    int t,n,a,q,r,i,q1,r1;

    string s="abcdefghijklmnopqrstuvwxyz";
    cin>>t;
    while(t--){
            cin>>n>>a;

    if(n<=a){
            cout<<"1"<<" ";
            for(i=0;i<n;i++){cout<<s[i];}
            cout<<endl;
    }
   /** a==1*/ else if(a==1){cout<<n<<" ";
                for(i=0;i<n;i++){cout<<'a';}
                cout<<endl;}
  /** a>2 */  else if(a>=3){
        string ans,an;
        q=n/a;r=n%a;
        for(i=0;i<a;i++){ans=ans+s[i];}
        for(i=0;i<q;i++){an+=ans;}
        for(i=0;i<r;i++){an=an+s[i];}
        cout<<"1"<<" "<<an<<endl;
    }
/**a=2*/    else{
        if(n==3 || n==4){cout<<"2"<<" ";
        if(n==3)cout<<"abb"<<endl;
        else cout<<"aabb"<<endl;}

        else{
            if(n<=8){cout<<"3"<<" ";
            string s1="aaababbb";
            for(i=0;i<n;i++){cout<<s1[i];}
            cout<<endl;
            }

            else{
                string sj, s2="aabbab";
                sj=s2;

                q1=n/6;r1=n%6;
                for(i=1;i<q1;i++){sj+=s2;}
                for(i=0;i<r1;i++){sj+=s2[i];}
                cout<<"4"<<" "<<sj<<endl;

            }

        }
    }




    }
return 0;}


