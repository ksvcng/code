#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
int n,k;
cin>>n>>k;
vector<pair<int, int > > vect;
int p[k];
for(int i=0;i<n;i++){
        int aa=0,bb=0;
    cin>>aa;
    vect.push_back(make_pair(aa, bb));
}
int cc=0;
for(int i=0;i<n;i++){
        int d;
    cin>>d;
    vector[i].secont=d;
    if(d!=1){cc=1;}
}

for(int i=0;i<k;i++){
    cin>>p[i];

}

if(cc==0){
       // cout<<"d"<<endl;
    sort(a,a+n);
    int flag=0;
    int first=0,last=n-1;
    for(int i=0;i<k;i++){
        if(i%2==0){
            first=last-p[i]+1;
        }
        else{
            last=first+p[i]-1;
        }

       // if(first>last){break;flag=1;}
    }
   // if(flag==1){cout<<"0"<<endl;}
   // else{
        long long ans=0;
//cout<<first<<" "<<last<<endl;
        for(int i=first;i<=last;i++){ans+=a[i];}
        cout<<ans<<endl;
    ///}

}




    }
return 0;}

