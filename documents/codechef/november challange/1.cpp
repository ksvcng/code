#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long int i,p=0,count1=0,count2=0,l=s.length();
      //  while(i==0 || i==l-1){
                                if(s[0]=='A'){count1++;}
                               else if(s[0]=='B'){count2++;}
                                 if(s[l-1]=='A'){count1++;}
                               else if(s[l-1]=='B'){count2++;}

                             //  i=i+l-1;
                          //   }

        for(i=1;i<l-1;i++){
                if(s[i]=='A'){count1++;}
              else  if(s[i]=='B'){count2++;}
              else{
                    while(s[i]=='.' && i<l){
                        p++;i++;}
                if(s[i-p-1]=='A' && s[i]=='A'){count1+=p;}
                else if(s[i-p-1]=='B' && s[i]=='B'){count2+=p;}
                p=0;i--;
                }
        }
        cout<<count1<<" "<<count2<<endl;
        }
return 0;}

