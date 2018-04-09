#include<bits/stdc++.h>
#define f(s,n) for(long long i=s;i<n;i++)
using namespace std;
int main()
{    long long t;
    cin>>t;
    while(t--){
long long n,c,d,s;
cin>>n;
long long t[n],tt=0;
f(0,n){cin>>t[i];tt+=t[i];}
cin>>c>>d>>s;
float first=(float)d/s;
first=first*(n-1);
first+=tt;
//cout<<"first= "<<first<<endl;
float time[n],crr,p,e;
f(0,n){time[i]=0;}
//f(0,n){cout<<time[i]<<" ";}
//cout<<endl;
for(long long i=0;i<c;i++)
{
   // cout<<" new car"<<endl;
    for(long long j=0;j<n;j++){
            if(j==0){time[j]=(i+1)*t[0];crr=time[j];}
            else{
                   // cout<<"curr = "<<crr<<" j=  "<<j<<"  i=  "<<i<<endl;
                    p=(float)d/s;e=0;
                if(crr+p>=time[j]){time[j]=crr+p+t[j];crr=time[j];}
                else{e=time[j]-crr-p;time[j]=crr+p+t[j]+e;crr=time[j];}
            }
              //  f(0,n){cout<<time[i]<<" ";}
//cout<<endl;
    }
 //  f(0,n){cout<<time[i]<<" ";}
//cout<<endl;
//cout<<" end" <<endl;
}
//cout<<"p= "<<p<<endl;
//cout<<first<<endl<<time[n-1]<<endl;
float ans=(float)(time[n-1]-first);
cout << fixed << setprecision(9) <<ans<<endl;

    }
return 0;}

