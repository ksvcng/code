#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,n,k,i,j=0,sum=0,flag=0,count=0;
    cin>>n>>k;
    int arr[n];
    if(n==1)
    {       if(k==0)cout <<"0"<<endl;
            else cout<<"-1"<<endl;
    }
    else
{
        int c=(n*(n-1))/2;cout<<"c= "<<c;
        int d=sqrt(k);cout<<"d= "<<d;
        for(j=d;j>=0;j--)
    {
        if(flag==1)break;
        int l=0;
        cout<<"j= "<<j;
        for(i=j;i>=0;i--)
        {cout<<"j= "<<j<<" and i= "<<i;
            if(k>=pow(i,2))
            {
            k=k-pow(i,2);
            arr[l]=i;l++;
            count++;sum=sum+i;i=i+1;cout<<"count = "<<count<<"and sum= "<<sum;
            if(count==n ){if(sum==c){flag=1;cout<<"flag=1 ";break;}}
            }
            if(count==n && flag==0){i=-5;}
        }
    }

    if(flag==1){for(i=0;i<n;i++){cout<<arr[i]<<" ";}}
    else cout<<"-1";


}

return 0;}
