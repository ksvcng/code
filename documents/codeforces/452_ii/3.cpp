#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {
    // Complete this function
    int n=a.size(),i,j=0;
    vector <int> arr(a.size());
    for(i=0;i+d<n;i++){arr[i]=a[i+d];}
    for(i=n-d;i<n;i++){arr[i]=a[j];j++;}

  //  for(i=0;i<n;i++){cout<<arr[i]<<" ";}
    return arr;

}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
