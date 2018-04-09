#include <iostream>
using namespace std;
int main()
{
    int t,i,j,k,sum=0;
    long n,q,l,r,f,s;
    cin>>n,q,l,r;
    long a[n+1];
    for(i=1;i<=n;i++)
        a[i] = 0;
    for(i=0;i<q;i++){
        cin>>t>>f>>s;
        if(t==1){
            a[f] = s;
        }
        else{
        sum=0;
        for(j=f;j<=s;j++){
            for(k=j;k<=s;k++){
                if(max(a[j],a[k]) >= l && max(a[j],a[k]) <= r){
                    sum+=1;
                }
            }
        }
        cout<<sum;
        }
    }
}
