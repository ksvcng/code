//Zonal Computing Olympiad 2013, 10 Nov 2012.   Tournament Problem Code: ZCO13001
#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n,i,j;
    long long sum=0;
    cin>>n;
   // if(n<2){exit(0);}
    int ts[n];
    for(i=0;i<n;i++){cin>>ts[i];}
    int total=(n*(n-1))/2;
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(ts[i]>ts[j]){sum=sum+(ts[i]-ts[j]);}
            else sum=sum+(ts[j]-ts[i]);
        }
    }
    cout<<sum;
return 0;
}
