

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,x;
       string str="";
       cin>>x>>n;
       // cout<<str[0]<<"b"<<str[1]<<"c ";
      for(int i=0;i<n;i++){str+="0";}
      //cout<<str[0]<<"b"<<str[1]<<"c ";
        cout<<str<<endl;
        cout<<" length= "<<str.length()<<endl;
        cout<<str[x-1];
        str[x-1]='2';
        cout<<str[x-1]<<endl;
        cout<<str;
    }

return 0;}




/**#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
int x,n,i;
long long sum=0;
cin>>x>>n;
sum=(n*(n+1)/2)-x;
//cout<<sum<<endl;
if(sum%2!=0 || n<=3){cout<<"impossible"<<endl;}
else{
       // cout<<"abc   ";
            string str;
            for(i=0;i<n;i++){str[i]='0';}
        str[x-1]='2';
       // for(i=0;i<n;i++){cout<<str[i];}
       // cout<<"abc   ";

        int flag =0;
        long long var=n;
        long long sm=0,des=sum/2;

    while(var!=x){      if(sm+var<=des){str[var-1]='1'; sm+=var;}
                        if(sm==des){flag=1;break;}
                        var--;if(var<0){flag=1;break;}
                 }
        if(flag==0){
                    var--;
                    while(var>0){    if(sm+var<=des){str[var-1]='1'; sm+=var;}
                                     if(sm==des){flag=1;break;}
                                     var--;if(var<0){flag=1;break;}
                                }
                   }

  for(i=0;i<n;i++){cout<<str[i];}
  cout<<endl;
  //cout<<" complete ";
}


    }
return 0;}


*/





/**#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
int a[4],flag=0;
cin>>a[0]>>a[1]>>a[2]>>a[3];
sort(a,a+4);
if(a[0]==a[1]){ if(a[2]==a[3]){}
                else{flag=1;}
              }
              else{flag=1;}
          if(flag==0){cout<<"YES"<<endl;}
          else {cout<<"NO"<<endl;}
}
return 0;}
*/

