#include<iostream>
using namespace std;
int cnt(int);
int main(){
    int t,a,b,i;
    cin>>t;
    while(t--){
        cin>>a>>b;

        int count1=cnt(a);
        int count2=cnt(b);
        cout<<count1<<"  "<<count2;
        int a[count1];
         for(i=0;i<count1;i++){
         a[i]=0;
         }

        int b[count2];
        for(i=0;i<count2;i++){
         b[i]=b%10;
         }

/**
        i=0;
                           while(a>0)
                            {
                                a[i]= a%10;
                                i++;
                                a=a/10;
                            }
                        i=0;
                        while(b>0)
                        {
                        b[i] = b%10;
                        i++;
                        b=b/10;
                        }

                        for( i=0;i<count1;i++){cout<<a[i]<<" ";}

                        for( i=0;i<count2;i++){cout<<b[i]<<" ";}

                     /**   if(count1>=count2){
                            int sum[count1];
                            for(i=0;i<count2;i++){
                                    int p=a[i]+b[i];
                                if(p>=10){p=p-10;}
                                sum[i]=p;
                            }
                            for(i=count2;i<count1;i++)
                            {
                                sum[i]=a[i];
                            }
                            for(i=count1-1;i>=0;i--)
                            {
                                cout<<sum[i];
                            }
                        }
                        else
                            {
                            int sum[count2];
                            for(i=0;i<count1;i++){
                                    int p=a[i]+b[i];
                                if(p>=10){p=p-10;}
                                sum[i]=p;
                            }
                            for(i=count1;i<count2;i++)
                            {
                                sum[i]=b[i];
                            }
                            for(i=count2-1;i>=0;i--)
                            {
                                cout<<sum[i];
                            }

                            }               */



    }

return 0;}


int cnt(int x)
{
    int count=0;
    if(x==0){count=1;}
    while (x> 0)
    {

        x/= 10;count++;
    }
    return count;
}

/**
for(int i=0;i<count1;i++){cout<<a[i]<<" ";}
        cout<<"end a";
        for(int i=0;i<count2;i++){cout<<b[i]<<" ";}
*/

