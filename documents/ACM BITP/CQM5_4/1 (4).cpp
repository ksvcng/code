#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int n,m;
cin>>n>>m;
int arr[n*m];
for(int i=0;i<n*m;i++){cin>>arr[i];}
int q;
cin>>q;
while(q--){
 int t;
 cin>>t;
 if(t==1){
    int x,y,r;
    cin>>x>>y>>r;
    int d=(x-1)*m + (y-1);
    arr[d]-=r;
   // cout<<arr[d]<<" gg ";
 }
 if(t==2){
    int x,y,r;
    cin>>x>>y>>r;
    int d=(x-1)*m + (y-1);
    arr[d]+=r;
   // cout<<arr[d]<<" pg ";
 }
 if(t==3){

    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
     long long sum=0,g=0;
    for(int i=x1;i<=x2;i++){

            int d1=(x1+g-1)*m + (y1-1);
    int count =y2-y1+1, k=0;
   // cout<<" start ="<<d1<<" last = "<<count<<endl;
            for(int j=d1;j<=m*n;j++){
            sum+=arr[j];k++;
            if(k==count){break;}
            }
           g++;//cout<<sum<<endl;
    }


    //int d2=(x2-1)*m + (y2-1);


cout<<sum<<endl;
 }



}

return 0;}
/**
4 7
2 3 4 5 6 7 8
1 4 5 6 7 8 8
3 4 2 3 4 3 2
1 1 2 3 4 5 6

*/
