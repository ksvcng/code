#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector <int> arr) {
    // Complete this function
    sort(arr.begin(),arr.end());
    int a,b,sum=0;
    for(int i=0;i<arr.size();i++){sum+=arr[i];}
    cout<<sum-arr[arr.size()-1]<<" "<<sum-arr[0];
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}
