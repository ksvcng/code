
#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        long int i,p,count1=0,count2=0,l=s.length();
        cout<<l;

        for(i=0;i<l;i++){
                cout<<s[i]<<endl;
                if(s[i]=='a'){count1++;}
        //if(s[l]=="B"){count2++;}

        }
        cout<<"no. of a= "<<count1;
         cout<<"no. of b= "<<count2;


    }

return 0;}

