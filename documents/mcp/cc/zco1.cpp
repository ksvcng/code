//https://www.codechef.com/ZCOPRAC/problems/ZCO14003

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long bud[n],revenue[n];
    for(i=0;i<n;i++)
    {
        cin>>bud[i];
    }

sort(bud,bud+n);


    for(i=0;i<n;i++)
    {
        revenue[i] =(n-i)*bud[i];
    }
    sort(revenue,revenue+n);
    cout<<revenue[n-1];


}
