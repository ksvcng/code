#include<bits/stdc++.h>

using namespace std;


int main(){
    while(1){
    int n;
    cin >> n;
    int div[20];
    for(int i=0;i<20;i++){div[i]=pow(2,i);}
    int i=19;
    while(div[i]>n){i--;}
     int s=i+1;
    int arr[s]; for(int i=0;i<s;i++){
    arr[i]=0;}
  //   for(int i=0;i<s;i++){
   // cout<<arr[i];}
   // cout<<" k  "<<endl;

    //arr[0]=1;
    int j=0;
    while(n>0){
    while(div[i]>n){arr[j]=0;j++;i--;}
    arr[j]=1;j++;n-=div[i];i--;
    }
    for(int i=0;i<s;i++){
    cout<<arr[i];}
   // }
   int max=0;
   int cmax=0;
   for(int i=0;i<s;i++){
    if(arr[i]==1){cmax++;}
    else if(cmax>max){max=cmax;cmax=0;}
    else{cmax=0;}
   }
   if(cmax>max){max=cmax;}
   cout<<max;
}
    return 0;
}

