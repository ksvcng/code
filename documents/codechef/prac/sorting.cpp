#include<bits/stdc++.h>
using namespace std;



int main(){
int n;
cin>>n;
int arr[n][2];
for(int i=0;i<2*n;i++){if(i%2==0){cin>>arr[i/2][0];}
                        else{cin>>arr[i/2][1];}}
                        cout<<endl<<" after sorting "<<endl;
int temp;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(arr[i][0]>arr[j][0]){
                temp=arr[i][0];arr[i][0]=arr[j][0];arr[j][0]=temp;
                temp=arr[i][1];arr[i][1]=arr[j][1];arr[j][1]=temp;
        }

    }
}


for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){cout<<arr[i][j]<<" ";}
    cout<<endl;
}

int count=0,prev=0;
for(int i=0;i<n;i++){

        if(arr[i][0]==arr[i+1][0]){if(arr[i][1]>arr[j][i]) temp=arr[i][1];arr[i][1]=arr[j][1];arr[j][1]=temp;}

}



for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){cout<<arr[i][j]<<" ";}
    cout<<endl;
}



return 0;}
