 #include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
long  n,q,l,r,i;
    cin>>n>>q>>l>>r;
    long  arr[n];
   for(i=0;i<n;i++){arr[i]=0;}

    while(q--){
            long c,x,y;
            cin>>c>>x>>y;
            if(c==1){arr[x-1]=y;}
            else{

                    long long ans=0;
                    i=x-1;
                while(i<y){
                        long count=0,c1=0,a[y-x+2],j=0,k;

                        while(arr[i]<r){
                            count++;
                            if(arr[i]>=l && arr[i]<=r){c1++;a[j]=count;j++;}
                            i++;if(i==y){break;}
                        }

                        a[j]=count;

                        for(k=0;k<c1;k++){
                                if(k==c1-1){ans+=a[k]*(a[k+1]-a[k]+1);}
                                  else{
                        ans+=a[k]*(a[k+1]-a[k]);}
                        }

                        if(i<y){
                            while(arr[i]>r){i++;if(i==y){break;}}
                        }
                }
                cout<<ans<<endl;
            }

    }
return 0;
}
