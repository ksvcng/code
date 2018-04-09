//Zonal Computing Olympiad 2014, 30 Nov 2013        /Video Game Problem Code: ZCO14001
/**#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n,i,z=0,count=0;
    int *x,*p;
    p=x;
    long long h;
   cout<<"enter value of n and h";
    cin>>n>>h;

    int stack[n];
     cout<<"enter value of element of "<<n<<" stacks";
    for(i=0;i<n;i++)
    {
      cin>>stack[i];
    }

 cout<<"enter operational string";
    for(i=0;i<i+1;i++)
    {
        cin>>*x;
        if(*x==0)
        {
        cout<<"string end";
           break;
        }
         x++;
    }
    cout<<"out of input loop";

    int op[i+1];
    for(i=0;i<count;i++)
    {
        op[i]=*p;
        p++;
    }

    for(i=0;i<count;i++)
    {
        cout<<op[i];
    }






    cout<<"string end";
}
*/



//Zonal Computing Olympiad 2014, 30 Nov 2013        /Video Game Problem Code: ZCO14001
#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n,i,z,con=1;
    int p=0;
    int flag=1;
    long long h;
    cin>>n>>h;
    int stac[n];
    for(i=0;i<n;i++)
    {
      cin>>stac[i];
    }
    cout<<"p= "<<p<<endl;
    cout<<"flag= "<<flag<<endl;
    cout<<"stac["<<p<<"]= "<<stac[p];
    while(con)
    {
        cin>>z;
        switch(z)
        {
       /** case 1:
            if(p>0) {
                p--;
                cout<<p;
                    }break ;
        case 2:
            if(p<n-1)
            {
                p++;
                cout<<p;
            }break ;*/
        case 3:
            if(flag==0)
            {
                cout<<stac[p];
                stac[p]--;

                    flag=1;
            }break ;

        case 4:
            if(flag==1 && stac[p]<h)
            {
                flag=0;
                stac[p]++;
                cout<<stac[p];
            }break;
        default :
           con=0;

        }
    }
        for(i=0;i<n;i++)
        cout<<stac[i]<<" ";
    return 0;
    }

