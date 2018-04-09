#include<bits/stdc++.h>
#define cinll(x) scanf("%lld",&x);
#define cini(x) scanf("%d",&x);
#define input freopen ("student.txt","r",stdin);
#define output freopen("outp.txt","w",stdout);

using namespace std;
int main()
{
    //input
    //output
    ios_base::sync_with_stdio(false);
    int t;
    cini(t);
   for(int k=1;k<=t;k++){
int n;
    cini(n);
        int arr[n];
    int os,es;
    os=n/2;
    es=n-n/2;
    int odd[os],even[es];
    int od=0,ev=0;
    for(int i=0;i<n;i++){

            cini(arr[i]);if(i%2==0){even[ev]=arr[i];ev++;}
            else{odd[od]=arr[i];od++;}
    }
sort(even,even+es);
sort(odd,odd+os);
sort(arr,arr+n);
int fin[n],fn=0;
od=0,ev=0;
for(int i=0;i<n;i++){
    if(i%2==0){fin[i]=even[ev];ev++;}
    else{fin[i]=odd[od];od++;}
}
    int flag=0,index;
    for(int i=0;i<n;i++){
        if(arr[i]!=fin[i]){flag=1;index=i;break;}
    }
    if(flag==0){printf("Case #%d: OK\n",k);}
           // cout<<"Case #"<<k<<": OK"<<endl;}
    else{printf("Case #%d: %d\n",k,index);}
        //cout<<"Case #"<<k<<": "<<index<<endl;}
    }
return 0;}

