#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
            long long n,i;
            cin>>n;


    long long int arr[n],narr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        narr[i]=arr[i];

    }
    if(n==1){cout<<"-1"<<endl;}
    else{
    sort(narr,narr+n);
long long l=narr[n-1];
    long long int fre[l+1];
    for(i=0;i<=l;i++){fre[i]=0;}
    //cout<<l;
//for(i=0;i<n;i++){cout<<"fre["<<narr[i]<<"]= "<<fre[narr[i]]<<endl;}

    for(i=0;i<n;i++){
            if(narr[i]==narr[i+1] && i+1!=n)
            {


                if(fre[narr[i]]>=2){fre[narr[i]]+=1;}
                            else    fre[narr[i]]=2;//cout<<fre[narr[i]];
            }
            else if(i+1==n){if(narr[i]==narr[i-1])  {}
                            else fre[narr[i]]=0;}


                   //else fre[narr[i]]=1;
                }



//for(i=0;i<n;i++){cout<<"fre["<<narr[i]<<"]= "<<fre[narr[i]]<<endl;}


  //  i=0;
   // while(i<n){cout<<"fre["<<arr[i]<<"]= "<<fre[arr[i]];
    //        i++;}
    long long int j=0;
    for(i=0;i<n;i++){
            if(fre[arr[j]]<fre[arr[i]])
            {
                cout<<arr[i]<<" ";j++;i=j;
            }

            else if(i==n-1) {cout<<"-1"<<" ";j++;i=j;}
            if(j==n-1){cout<<"-1"<<endl;break;}



    }

            }

    }
return 0;}

/**

1
12
9 7 12 8 9 12 6 7 9 8 12 5

*/
