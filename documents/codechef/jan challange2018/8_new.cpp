#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string hstr="";
    for(long long i=0;i<str.length();i++) {
            for(long long j=1;(j+i)<=str.length();j++){hstr.append(str, i, j);}}
    long long q;
    cin>>q;
     long long g=0;
    while(q--){
        long long p,m,k,ack;
        cin>>p>>m;
       k=(p*g)%m+1;
       char c=hstr[k-1];
       int ascii=int(c);
       ack=ascii;
        g+=ack;
        cout<<c<<endl;
    }
return 0;}
