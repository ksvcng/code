#include<iostream>
using namespace std;
long long cnt(long long);
int main(){
    long long t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        long long count1=cnt(a);
        long long count2=cnt(b);
        long long a1[count1];
        long long b1[count2];
        long long i=0;

        if(a==0 && b==0){cout<<"0"<<endl;}
        else{
                            while (a>0)
                            {
                                a1[i]= a%10;
                                i++;
                                a=a/10;
                            }
                        i=0;
                        while(b>0)
                        {
                        b1[i] = b%10;
                        i++;
                        b=b/10;
                        }

                        if(count1>=count2){
                            long long sum[count1];
                            for(i=0;i<count2;i++){
                                    long long p=a1[i]+b1[i];
                                if(p>=10){p=p-10;}
                                sum[i]=p;
                            }
                            for(i=count2;i<count1;i++)
                            {
                                sum[i]=a1[i];
                            }
                            for(i=count1-1;i>=0;i--)
                            {
                                cout<<sum[i];
                            }
                            cout << endl;
                        }
                        else
                            {
                            long long sum[count2];
                            for(i=0;i<count1;i++){
                                    long long p=a1[i]+b1[i];
                                if(p>=10){p=p-10;}
                                sum[i]=p;
                            }
                            for(i=count1;i<count2;i++)
                            {
                                sum[i]=b1[i];
                            }
                            for(i=count2-1;i>=0;i--)
                            {
                                cout<<sum[i];
                            }
                            cout <<endl;
                            }


        }
    }

return 0;}


long long cnt(long long x)
{
    long long count=0;
    while (x> 0)
    {

        x/= 10;count++;
    }
    return count;
}
