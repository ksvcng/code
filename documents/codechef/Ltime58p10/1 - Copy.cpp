#include<bits/stdc++.h>
#define f( a,b) for(int i=a;i<b;i++)
#define f1( a,b) for(int j=a;j<b;j++)
#define nl cout<<endl;
#define sp cout<<" ";
#define vect(c) vector<int> c;
#define vect1(n,s) vector<int> n(s);
#define co cout<<
#define cn cin>>
#define pu(a,b) a.push_back(b);
#define input freopen ("input.txt","r",stdin);
#define output freopen("output.txt","w",stdout);

using namespace std;


set< long long > pd;
    set< long long >::iterator it1;
void printDivisors(long long n)
{for (long long i=1; i<=sqrt(n)+1; i++){
        if (n%i==0){if (n/i == i){pd.insert(i);}
        else {pd.insert(i);pd.insert(n/i);}
        }}
}



int main()
{
    int t;
   cin>>t;
    while(t--){
int  n;
cin>>n;
int arr[n],acsum[n];
long long sum=0,sz=0;
vector<long long> divisor;
f(0,n){cn arr[i];sum+=arr[i];}
pd.clear();
printDivisors(sum);
for(it1 = pd.begin(); it1!=pd.end();  ++it1){if(*it1>n){break;}
                                            divisor.push_back(*it1);}
sz=divisor.size();
long long counter[sz],st[sz];f(0,sz){counter[i]=1;st[i]=1;}
long long re[sz]; f(0,sz){ re[i]=sum/divisor[i];}
acsum[0]=arr[0];f(1,n){acsum[i]=acsum[i-1]+arr[i];}
 f(0,n){cout<<acsum[i]<<" ";}nl
 f(0,sz){cout<<re[i]<<" ";}nl
for(int i=0;i<n;i++){ for(int j=0;j<sz;j++){
                    if(st[j]==1){
                            if(acsum[i]==re[j]*counter[j]){counter[j]++;}
                            else if(acsum[i]>re[j]*counter[j]){st[j]=0;}}}
                    }
int ans[n];
for(int i=0;i<n;i++){ans[i]=0;}
int j=0;
for(it1 = pd.begin(); it1!=pd.end();  ++it1){
    if(st[j]==1){ans[*it1-1]=1;}
    j++;
}
for(int i=0;i<n;i++){cout<<ans[i];}nl
    }
return 0;}

