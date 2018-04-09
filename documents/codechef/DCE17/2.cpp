#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t=1000000;
    while(t--){
            long countc=0,counto=0,p=0,flag=0,i;
            string ans, arr;
cin>>arr;
if(arr[0]=='0' || arr[0]=='1')
{
for(i=0;i<20;i++){
                    if(flag==0){
                    if(i%2==0){countc+=arr[i]-48;}
                    else{ counto+=arr[i]-48;}
                    if(i<=9){
                            if(i%2==0)  {
                                        if(5-(i/2+1)+countc<counto){ans="TEAM-B";flag=1;p=i+1;}
                                        else if((5-i/2)+counto<countc){ans="TEAM-A";flag=1;p=i+1;}
                                        }

                            else       {
                                        if(5-(i/2+1)+counto<countc){ans="TEAM-A";flag=1;p=i+1;}
                                        else if(5-(i/2+1)+countc<counto){ans="TEAM-B";flag=1;p=i+1;}
                                       }

                            }
                   else if(i%2!=0){
                                    if(countc>counto){p=(i+1);ans="TEAM-A";flag=1;}
                                    else if(counto>countc){p=(i+1);ans="TEAM-B";flag=1;}
                                  }
                    }
}
if(flag==1){cout<<ans<<" "<<p<<endl;}
else cout<<"TIE"<<endl;

}
else{break;}
    }
return 0;}


