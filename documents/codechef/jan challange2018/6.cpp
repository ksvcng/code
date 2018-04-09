#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i,ab;
cin>>n;

int a[n];
int b[n];
//string inp[n];
//string rep[n];
for(i=0;i<2*n;i++){((i<n)?(cin>>a[i]):(cin>>b[(i-n)]));}


//for(i=0;i<n;i++){cout<<a[i];}
//for(i=0;i<n;i++){cout<<b[i];}
for(i=0;i<n;i++){
    //for(i=0;i<a[i];i++){cout<<}
    int j=0;
    while(j<b[i]){cout<<"b";j++;}
    while(j<a[i]){cout<<"w";j++;}
    cout<<endl;
}


/**
int a[n];
int b[n];
string inp[n];
string rep[n];
for(i=0;i<n;i++){cin>>a[i];inp[i]={a[i],'w'};}
for(i=0;i<n;i++){cin>>b[i];rep[i]={b[i],'b'};inp[i].replace(0, b[i],rep[i]);}

for(i=0;i<n;i++){

   cout<<inp[i]<<endl;}

   */

   for(i=1;i<n;i++){cout<<i<<" ";}
   cout<<i;
   //int lo=n/3+1;


/**
   int q=n/3+1;
   int a1[q];
   int a2[q];
   int a0[q];
   if(n%3==0){a1[q-1]=a2[q-1]=a0[q-1]=0;}
   else if(n%3==1){a0[q-1]=a2[q-1]=0;}
   else{a0[q-1]=0;}

   int j=0,k=0,l=0;
   for(i=1;i<=n;i++){
    if(i%3==2){a2[j]=i;j++;}
    else if(i%3==0){a0[k]=i;k++;}
    else{a1[l]=i;l++;}
   }

 //  for(i=0;i<q;i++){cout<<a0[i]<<endl<<a1[i]<<endl<<a2[i]<<endl;}


   i=0;
while(a2[i]!=0){cout<<a2[i]<<" ";i++;if(i==q){break;}}
//cout<<"a";
 i=0;
while(a1[i]!=0){cout<<a1[i]<<" ";i++;if(i==q){break;}}
//cout<<" b";
 i=0;
while(a0[i]!=0){cout<<a0[i]<<" ";i++;if(i==q){break;}}
//cout<<"c";
*/
return 0;}


