#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
//long long mSum(int a[], int size);
using namespace std;
long long mSum(int a[], int size){
  long long  Fmax = a[0],Cmax = a[0],ab;
  for (int i = 1; i < size; i++){
                                ab=a[i];
                            Cmax = max(ab, Cmax+ab);
                            Fmax = max(Fmax, Cmax);
                                }
   return Fmax;
}






int main()
{   int t;
    cin>>t;
    while(t--){
int n,k,i,aneg=1,apos=1,minm=-10000000;
long long ans=0,sum=0,temp1,temp2;
cin>>n>>k;
int arr[n];
for(i=0;i<n;i++){cin>>arr[i];
                sum+=arr[i];
               // if(arr[i]>=0){aneg=0;}
                //else if(arr[i]<0){apos=0;minm=max(minm,arr[i]);}


                }
               // if(aneg==1){cout<<minm<<endl;continue;}
               // if(apos==1){cout<<sum*k<<endl;continue;}
                if(k==1){cout<<mSum(arr,n)<<endl;}
                else{
                        int arrb[2*n];
                        for(i=0;i<n;i++){arrb[i]=arrb[i+n]=arr[i];}

                        temp2=mSum(arrb,2*n);
                        if(sum>0){temp1=temp2+(k-2)*sum;}
                        else{temp1=temp2;}

                       // if(k*sum>=temp1){cout<<k*sum<<endl;}
                        //else{cout<<temp1<<endl;}
                        cout<<temp1<<endl;

                }






}
return 0;}

