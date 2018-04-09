#include<bits/stdc++.h>
using namespace std;
set< long long > pd;
    set< long long >::iterator it1;
set< long long > pf;
    set< long long >::iterator it2;
void printDivisors(long long n)
{for (long long i=1; i<=sqrt(n)+1; i++){
        if (n%i==0){if (n/i == i){pd.insert(i);}
        else {pd.insert(i);pd.insert(n/i);}
        }}
}
void primeFactors(long long  n)
{   long long c=0;
    while(n%2==0)
    {  if(c==0){pf.insert(2);c++;}
        n=n/2;}
    for (int i = 3; i <= sqrt(n); i = i+2)
    {   while (n%i == 0){pf.insert(i);n = n/i;}}
    if (n > 2)
        pf.insert(n);
}
int main() {
    long long n;
    cin>>n;
    printDivisors(n);
    long long ans=1;
    long long p=1,q=1;
    for(it1 = pd.begin(); it1!=pd.end();  ++it1){
        pf.clear();
        if(*it1>2){
        primeFactors(*it1);
        p=1,q=1;
        for(it2 = pf.begin(); it2!=pf.end();  ++it2){p*=(*it2-1);q*=(*it2);}
        long long num=(*it1/q);
        num=p*num;
        ans =(( (ans%1000000007) * (num%1000000007))%1000000007);
    }
    }
    cout<<ans;
    return 0;
}
