#include<bits/stdc++.h>
#define mx 1000000007
using namespace std;
/**long long dValue(long long a,longlong b)
{

}
*/
void print(int ar[],int n)
{
    for(int i=0;i<n;i++){cout<<ar[i];}
    cout<<endl;
}

int main()
{   long long int t;
    cin>>t;
    while(t--){
        long long b,d;
        cin>>b>>d;
        int arr[d],gg;
        arr[0]=0;
        for(int i=1;i<d;i++){arr[i]=0;}
        int j=d-2;

            for(int p=0;p<d;p++){
                    for(int k=0;k<=p;k++){
                            for(int h=0;h<p;h++){
                            for(int i=0;i<b;i++){print(arr,d);arr[i]+=1;}
            arr[d-1]=0;arr[p]+=1;arr[h]+=1;
            }

            }
            arr[p]+=1;
            cin>>gg;arr[p-1]+=1;//;for(int ll=d-1;ll>=p;ll--){arr[ll]=0;}
        }

    }
return 0;}


