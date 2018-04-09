#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
long long a,b,i;
cin>>a>>b;
long long min,count=0;
long long gc=gcd(a,b);
    for (long long i=1; i<=sqrt(gc); i++){
        if (gc%i==0)
        {if (gc/i == i)count += 1;
         else count += 2;
        }
    }

cout<<count;



    return 0;
}
