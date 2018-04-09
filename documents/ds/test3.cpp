#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n,m,i,res=0,count=0;
        cin>>n>>m;
        int a[m],b[m];
        for(i=0;i<m;i++){
            cin>>a[i]>>b[i];

        }
        sort(b,b+m);
       // for(i=0;i<m-1;i++){
           // if(b[i]==b[i+1]){count++;}
       // }
        for(i=0;i<m-1;i++){
                //cout<<b[i];
        while(b[i]==b[i+1]){i++;if(i==m-1){break;}}


        res=res+1;//cout<<" count added ";
        }
       // cout<<b[m-1]<<endl;

        if(b[m-1]!=b[m-2]){res+=1;}
        cout<<res<<endl;
    }

    return 0;
}

