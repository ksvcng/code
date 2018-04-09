#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
#define mm 1000000009
using namespace std;

int main()
{   long long int n,m,k;
cin>>n>>m>>k;
char a;
long long sum=0;
int count=0,ndot=0;
char mat[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];if(mat[i][j]=='.'){ndot++;}
    }
}
//if(k==1){cout<<ndot;exit(0);}

for(int i=0;i<n;i++){
         count=0;
    for(int j=0;j<m;j++){

     if(mat[i][j]=='.'){count++;}
        else{if(count>=k){sum+=(count-k+1);count=0;}
            else{count=0;}
        }
    }
    if(count>=k){sum+=(count-k+1);}
}
//if(count>=k)sum+=val(count,k);

//cout<<" sum till= "<<sum<<endl;

for(int i=0;i<m;i++){
         count=0;
    for(int j=0;j<n;j++){

     if(mat[j][i]=='.'){count++;}
        else{if(count>=k){sum+=(count-k+1);count=0;}
            else{count=0;}
        }
    }
    if(count>=k)sum+=(count-k+1);
}
//if(count>=k)sum+=val(count,k);
cout<<sum;

return 0;}


/**
INPUT
7 10 4
**...*....
.**..***..
....**....
.**......*
*...*.....
**********
..........



*/
