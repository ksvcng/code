#include<bits/stdc++.h>
using namespace std; int main() { long long int t; cin>>t; while(t--){ long long n; cin>>n; int a; set< int > pf; for(int i=0;i<n;i++){cin>>a;pf.insert(a);} cout<<n-pf.size()<<endl; } return 0;}































/**#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
long long n;
cin>>n;
int a; set< int > pf;
for(int i=0;i<n;i++){cin>>a;pf.insert(a);}
cout<<n-pf.size()<<endl;
    }
return 0;}
*/
