#include<iostream>
#include<string>
//#include <math.h>
using namespace std;
int div(int [],int);
int value(int [],int);
int main(){
    int t,i;
    cin>>t;
    while(t--){
         int sum=0,flag=0;
        string s;
        int maxi=-1,p;
        cin>>s;
        int len=s.length();
        int arr[len];
        for(i=0;i<len;i++){
            arr[i]=s[i]-'0';
    sum+=arr[i];
        }
        int newarray[len-1];
int j=0;
for(i=0;i<len;i++){
                    for(j=0;j<i;j++){newarray[j]=arr[j];}
                    for(j=i;j<len-1;j++){newarray[j]=arr[j+1];}
                    if(div(newarray,len-1)>0)
                    {
					//cout<<"present maxi is : "<<maxi;
					//cout<<"found : "<<value(newarray,len-1);
                        if(value(newarray,len-1)>maxi)
                           { maxi=value(newarray,len-1);
                           p=i;flag=1;
						 //  cout<<"new maxi is : "<<maxi;
						   }
                    }


                }
                if(flag==0){cout<<-1;}
                else{
                    for(j=0;j<p;j++)
                    {cout<<arr[j];}
                    for(j=p;j<len-1;j++)
                    {cout<<arr[j+1];}

                }
                cout<<endl;

    }


return 0;}

int div(int b[],int ln)
{
int sm=0,i;
int ans;

for(i=0;i<ln;i++)
{ sm+=b[i];}

if((b[ln-1]-48)%2==0 && sm%3==0){ans= 1;}
else{ans=-1;}

    return ans;
}


int value(int c[],int l)
{
    int number = 0;

for (int i = 0; i < l; i++) {
    number *= 10;
    number += c[i];
}
return number;

}

