#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
long long n,i;
cin>>n;
long arr[n],narr[n];
for(i=0;i<n;i++){cin>>arr[i];narr[i]=arr[i];}
if(n==1){cout<<0<<endl<<arr[0]<<endl;}
else if(n==2){
        if(arr[0]==arr[1]){cout<<0<<endl<<arr[0]<<" "<<arr[1]<<endl;}
        else{cout<<2<<endl<<arr[1]<<" "<<arr[0]<<endl;}
}
else if(n==3){
    sort(narr,narr+n);
    if(narr[0]==narr[1] || narr[1]==narr[2]){cout<<2<<endl<<arr[2]<<" "<<arr[0]<<" "<<arr[1]<<endl;}
    else {cout<<3<<endl<<arr[1]<<" "<<arr[2]<<" "<<arr[0]<<endl;}
}
else{
        long count=0;
         sort(narr,narr+n);
        cout<<n<<endl;
       for(i=0;i<n-1;i++){if(narr[i]==narr[i+1]){count=1;}
                     //   else count++;}
                      //  if(count==1){cout<<narr[n-1]<<" "<<narr[n-2];
                                    //for(i=0;i<n-2;i++){cout<<" "<<narr[i];}}
                                   // else{

                                    //}

       // for(i=2;i<n;i++){cout<<narr[i]<<" ";}
       // cout<<narr[0]<<" "<<narr[1];
        //cout<<endl

        if(count!=1){for(i=1;i<n;i++){cout<<arr[i]<<" ";}
                        cout<<arr[0]<<endl;}
                        else{
        long j=0,temp[n/2+1];for(i=0;i<n/2+1;i++){temp[i]=-1;}
       // if(n%2==0){
            for(i=0;i<n-1;i++){if(arr[i]==arr[i+1]){temp[j]=i;j++;}
                                else{ narr[i]=arr[i+1];narr[i+1]==arr[i];i++;}}
                                i=0;
                               // if(temp[])
                                while(temp[i+1]!=-1){
                                    if(narr[temp[i]]=arr[temp[i+1]]);
                                }
                                narr[temp[i]]=arr[temp[0]];
                                for(i=0;i<n-1;i++){cout<<narr[i]<<" ";}
                                cout<<narr[n-1]<<endl;

      //  }

                        }

}



    }
}
return 0;}


