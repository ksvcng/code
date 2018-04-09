#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{    int t,n,p;
    cin>>t;
    while(t--){
            int r,j=1,i=0;
cin>>n>>p;
if(n==1 || n==2){cout<<"impossible"<<endl;}
else if(p==1 || p==2){cout<<"impossible"<<endl;}
else{
        char arr[n];
    int l=n/p;

            if(p%2==0){
                while(i<p/2-1){arr[i]='a';arr[p-i-1]='a';i++;}
                arr[i]='b';i++;arr[i]='b';
            }
            else {
                while(i<p/2){arr[i]='a';arr[p-i-1]='a';i++;}
                arr[i]='b';
            }

            if(l>1){
            for(i=0;i<p;i++){
                                arr[(j)*p+i]=arr[i];
                                if(i==p-1)
                                {if(j==l-1)break;
                                else j++;i=-1;
                                }
                            }
                   }
                for(i=0;i<n;i++){cout<<arr[i];}
                cout<<endl;
}
    }
return 0;}


