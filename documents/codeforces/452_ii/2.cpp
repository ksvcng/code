#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */


    int n,q,x,y,i,c,li=0,temp,temp2;
    cin>>n>>q;
    vector< vector<int> > arr(n,vector<int> () ) ;
    for(i=0;i<q;i++){
        cin>>c>>x>>y;
        if(c==1){ temp=(x^li)%n;
                    arr.at(temp).push_back(y);
//}

                   }
        else if(c==2){

            temp=(x^li)%n;
            temp2=y%(arr[temp].size());
            li=arr[temp][temp2];
            cout<<li<<endl;
        }
    }

    return 0;
}
