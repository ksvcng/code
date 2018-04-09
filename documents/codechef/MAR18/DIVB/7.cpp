#include<bits/stdc++.h>
using namespace std;
int main()
{   long long  n,q;
    cin>>n>>q;
    long long arr[n];
    for(long long i=0;i<n;i++){cin>>arr[i];}
//sort(arr+3,arr+8);
//for(long long i=0;i<n;i++){cout<<arr[i]<<" ";}
    while(q--){
            long long l,r,x;
        cin>>x>>l>>r;
        if(x==1){arr[l-1]=r;}
        else{
                long long range=r-l+1;
    l--;r--;
    if(range<3){cout<<"0"<<endl;}
    else{
    long long a[range];
    for(long long j=0;j<range;j++){a[j]=arr[j+l];}
    sort(a,a+range,greater <long long>() );
    long long sum=0;
    long long k=0,p=0;
    for(long long i=0;i<range-2;i++){
        if(a[i]<a[i+1]+a[i+2]){sum=a[i]+a[i+1]+a[i+2];p=1;break;}
    }
    if(p==0){cout<<"0"<<endl;}
    else{cout<<sum<<endl;}

    }

    }


    }
return 0;}

