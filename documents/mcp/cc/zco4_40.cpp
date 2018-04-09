//Zonal Computing Olympiad 2015, 29 Nov 2014    Variation Problem Code: ZCO15002
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    long i,j,k,res=0;
    long long n;
    cin>>n>>k;
  //  if(n<1){exit(0);}
    int data[n];
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(data[i]-data[j]>=k || data[j]-data[i]>=k)
            {
                res++;
            }
        }
    }
cout<<res;

return 0;
}

