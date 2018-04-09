#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 long long int t;
 cin>>t;
 while(t--)
 {
    long long int n;
    int k,i,j=0;
    cin>>n;
    int a[n];
    int b[n];
    for ( i=0;i<n;i++)
      {
      cin>>a[i];
      if(a[i]==0)
        {
       //  b[j]=i;
         j++;
        }

      }

        k=j;
        //cout<<" j= "<<j<<endl;
		int count=0,sum=0;
         for(int p=0;p<(n-j);p++){sum+=a[p];}
		int temp;
		//cout<<" count = "<<count;
		//cout<<" n-j= "<<n-j<<endl;
		while(sum!=(n-j))
		{
		int l=0;
		for(int m=0;m<n-1;m++){if(a[m]==0 && a[m+1]==1){b[l]=m;l++;}}
		     for(int p=0;p<l;p++){ a[b[p]]=1;a[b[p]+1]=0;}
		     sum=0;
		     for(int p=0;p<(n-j);p++){sum+=a[p];}
		     for(int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
		     count++;
		}
      cout<<count<<endl;
      }

 return 0;
 }
