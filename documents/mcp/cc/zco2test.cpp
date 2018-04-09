//Zonal Computing Olympiad 2014, 30 Nov 2013        /Video Game Problem Code: ZCO14001
#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n,i,z,con=1;
    int p=0;//pointer
    int flag=0;//
    long long h;
    cin>>n>>h;
    int stac[n];
    for(i=0;i<n;i++)
    {
      cin>>stac[i];
    }

    while(con)
    {
        cin>>z;
        switch(z)
        {
        case 1:
            if(p>0) { p--;}break ;
        case 2:
            if(p<n-1){p++;}break ;
        case 3:
            if(flag==0 && stac[p]>0)
            {stac[p]--;flag=1;}break ;
        case 4:
            if(flag==1 && stac[p]<h)
            {stac[p]++;flag=0;}break;
        default :
           con=0;

        }
    }
        for(i=0;i<n;i++)
        cout<<stac[i]<<" ";
        return 0;
    }

