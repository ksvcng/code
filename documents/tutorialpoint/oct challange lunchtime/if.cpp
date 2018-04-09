#include<iostream>
#include<string>
//#include <math.h>
using namespace std;
long long div(long long [],long long);
long long value(long long [],long long);
int main(){
    long long t,i;
    cin>>t;
    while(t--){
         long long sum=0,flag=0, maxi=-1,p;;
        string s;
        cin>>s;
        long long len=s.length();
        long long arr[len];
        for(i=0;i<len;i++){arr[i]=s[i]-'0';sum+=arr[i];}
long long newarray[len-1];
long long j=0;
for(i=0;i<len;i++){ for(j=0;j<i;j++){newarray[j]=arr[j];}
                    for(j=i;j<len-1;j++){newarray[j]=arr[j+1];}
                    if(div(newarray,len-1)>0){if(value(newarray,len-1)>maxi){ maxi=value(newarray,len-1);p=i;flag=1;}}
                  }
                if(flag==0){cout<<-1;}
                else{for(j=0;j<p;j++){cout<<arr[j];}
                    for(j=p;j<len-1;j++){cout<<arr[j+1];}
                    }
                cout<<endl;}
return 0;}

long long div(long long b[],long long ln)
{long long sm=0,i,ans;
for(i=0;i<ln;i++){ sm+=b[i];}
if((b[ln-1])%2==0 && sm%3==0){ans= 1;}
else{ans=-1;}
return ans;
}

long long value(long long c[],long long l)
{long long number = 0;
for (long long i = 0; i < l; i++) {number *= 10; number += c[i];}
return number;
}

