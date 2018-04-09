#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
long long n,q,l,r,j,i;
    cin>>n>>q>>l>>r;
    long long arr[n];
    for(i=0;i<n;i++){arr[i]=0;}

    while(q--){
            long long c,x,y,count=0,p=0,point;
            cin>>c>>x>>y;
            if(c==1){arr[x-1]=y;}
            else{
                for(i=x-1;i<y-1;i++){
                    if(l<=arr[i] && r>=arr[i]){
                            if(i==point+1){count=count+p;point=point++;}
                        j=i;count++;
                        while(arr[i+1]<=r){count++;i++;if(i==y-1){break;}}

                        i=j;

                    }
                    else if(arr[i]<l){
                           // cout<<" else loop exe ";
                           p=0;
                            while (arr[i]<l)
                            {p++;point=i;i++;if(i==y){break;}}
                            i--;
                          //  cout<<"p= "<<p<<" point ="<<point;
                        }

                }
                if(arr[y-1]>=l && arr[y-1]<=r){
                      //  cout<<"y-1= "<<y-1<<" point ="<<point;
                       if(y-1==point+1){count=count+p;}
                        count++;}
                cout<<count<<endl;
            }

    }


return 0;}


