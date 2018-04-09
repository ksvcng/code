#include<bits/stdc++.h>
using namespace std;
/**long long power(long long a,long long b)
{
    long long ans=1;
    for(int i=0;i<b;i++){
        ans*=a;

    }
return ans;
}

*/
int main()
{   long long int t;
    cin>>t;
    while(t--){
long long n;
cin>>n;
long long count=0,i=0;
while(n>0){
    n=n-pow(2,i);
  i++;//  cout<<n<<endl;
    count++;
}

cout<<count<<endl;
    }
return 0;}

