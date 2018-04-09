#include<bits/stdc++.h>
using namespace std;
 long long curmin,co;
long long calc( long long x, long long y,long long arr[],long long n,long long h)
{
   //cmin=x;
   //cout<<"curmin  = "<<curmin<<endl;
//for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
//cout<<" x= "<<x<<" y= "<<y<<" n= "<<n<<" h= "<<h<<" "<<endl;
//int e;
//cin>>e;
    long long mid=(x+y)/2;
    long long countt=0;
    for(int i=0;i<n;i++){
        countt+=ceil((double)arr[i]/mid);
    }
    //int co=0;
    if(x==y-1){co++;}
    if(x==y){return curmin ;}
    else if(co>=2){/**cout<<" ans found "<<" cmin== "<<curmin;*/return curmin;}
    else if(countt<=h){ curmin=mid;calc(x,mid,arr,n,h);}
    else {calc (mid,y,arr,n,h);}


}

int main()
{   long long  t;
    cin>>t;
    while(t--){
            co=0;
long long n,h;
cin>>n>>h;
long long arr[n];
long long sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];//sum+=arr[i];
}

sort(arr, arr+n, greater<long long>());
if(h==n){cout<<arr[0]<<endl;}
//else if(h>=sum){cout<<"1"<<endl;}
//else if(sum%arr[n-1]==0  && h==sum%arr[n-1]){cout<<arr[n-1]<<endl;}
else{
        //cout<<"sum= "<<sum<<endl;
        long long temp=ceil((float)sum/h);
        temp=1;
 long long cmin=temp;
 curmin=temp;

//cout<<temp<<"  "<<arr[0]<<" "<<n<<" "<<h;
cout<<calc(temp,arr[0],arr,n,h)<<endl;

}
    }
return 0;}

