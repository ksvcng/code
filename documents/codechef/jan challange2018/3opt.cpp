#include<bits/stdc++.h>
using namespace std;
long long mSum(int a[], int size){long long  Fmax = a[0],Cmax = a[0],ab;for (int i = 1; i < size; i++){ab=a[i];Cmax = max(ab, Cmax+ab);Fmax = max(Fmax, Cmax);}return Fmax;}
int main()
{   int t;
    cin>>t;
    while(t--){
int n,k,i;
long long sum=0;
cin>>n>>k;
int arr[n],arrb[2*n];
for(i=0;i<n;i++){cin>>arr[i];arrb[i]=arrb[i+n]=arr[i];sum+=arr[i];}
((k==1)?(cout<<mSum(arr,n)<<endl):(( (sum>0)?(cout<<(mSum(arrb,2*n)+(k-2)*sum)<<endl):(cout<<mSum(arrb,2*n)<<endl))));
}return 0;}
