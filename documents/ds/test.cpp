#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // cout<<"0"<<endl<<"0"<<endl<<"0"<<endl<<"0"<<endl<<"0"<<endl<<"0"<<endl;

    int arr[100000];
    cin>>arr[0];
   // cout<<"0"<<endl<<"0"<<endl<<"0"<<endl<<"0"<<endl<<"0"<<endl<<"0"<<endl;
int    i=1;
int k=1;
    for(int j=1;j<=10;j++){
            for(k=1;k<=arr[0];k++){
            cout<<k*j;
            if(k*j<10){cout<<"   ";}
            else if(k*j<100){cout<<"  ";}
            else {cout<<" ";}


                   // int    i=0;
                   // while(i!=100000000 ){/**cout<<arr[i]<<endl;*/i++;}
                    }
                    cout<<endl;
    }
  //  cout<<" end of loop ";
//string s="888866";
//char c=s[5];
//char d=s[3];
//int ii=int(c)-48;
//int i2=int(d)-48;
//int ans=ii+i2;
//int ia = a - '0';
//cout<<ans;
//int a = 10;
//stringstream ss(s);
//ss>>ii;
//cout<<ii;
/**
string str = ss.str();
int rem=int(s[0])-48;
string s2=s2+s[1];
cout<<s2<<" "<<rem;
*/
return 0;}

/**
*

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
string pans="0",pstr="0";
    cin>>t;
    while (t--){
       string  a,ans="";
        int  c,d,rem=0,i,sum;

        cin>>a;

if(a==pstr){cout<<"loop  " <<pans<<endl;continue;}
else{
             i=0;
            int count1=0,count2=0;
           while(a[i]=='0')
            {count1++;i++;}
            a.erase (0,count1);
            if(a.length()==0){cout<<"0"<<endl;continue;}
             if(a.length()<8){
        stringstream num(a);
        int x=0;
        num>>x;
        cout<<x*11<<endl;continue;
        }
      //  cout<<a<<endl;
            i=a.length()-1;
            while(a[i]=='0'){count2++;i--;}
            a.erase((a.length()-count2),count2);
           // cout<<a<<endl;



        ans+=a[a.length()-1];//cout<<"ans is = "<<ans<<endl;

        for(i=a.length()-2;i>=0;i--){

            c=a[i]-48;
            d=a[i+1]-48;
            sum=(c+d+rem);

            if(sum>=10){
                  // cout<<"   loop a    " ;
                 rem=1;
                //cout<< " rem=  "<<rem<< "     " ;
                stringstream ss;
                ss<<sum;
                string str = ss.str();
                ans+=str[1];


            }
            else{
          //  cout<<"   loop b   ";
            rem=0;

          //   cout<< " rem=  "<<rem<< "     " ;
                 stringstream s1;
                s1<<sum;
                string str1 = s1.str();
                ans+=str1[0];
                }

               // cout<<" ans is "<<ans<<" and reminder is "<<rem<<endl;
        }
        //c=(a[0]-48)+rem;
        // cout<<" end of loop \n ans is "<<ans<<" and reminder is "<<rem<<endl;
        // cout<<"value of c = "<<c <<" and rem is "<<rem;

        d=c+rem;
        stringstream s2;
                s2<<d;
                string str2 = s2.str();
        if(d>=10){ans+=str2[1];ans+=str2[0];}
        else{ans+=str2[0];}


 reverse(ans.begin(),ans.end());
       // ans=(a*11);
            ans.append(count2,'0');


        cout<<ans<<endl;
        pstr=a;
        pans=ans;
    }
    }
     Enter your code here. Read input from STDIN. Print output to STDOUT
    return 0;
}
*/
