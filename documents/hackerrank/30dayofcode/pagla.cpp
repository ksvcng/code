#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i;
    long long m;
    cin >> n >> m;
   int arr[n];
   for(i=0;i<n;i++){arr[i]=0;}
    for(long long a0 = 0; a0 < m; a0++){
       long long a,b,k;

        cin >> a >> b >> k;
        for(i=a-1;i<b;i++){arr[i]=arr[i]+k;}

    }
    sort(arr,arr+n);
    cout<<arr[n-1];
   // for(i=0;i<n;i++){cout<< arr[i]<<" ";}
    return 0;
}
