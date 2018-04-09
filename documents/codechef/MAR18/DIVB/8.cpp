#include<bits/stdc++.h>
using namespace std;
int main()
{   long long  n,p;
    vector< pair <int,int> > vect;
    vector< pair <int,int> > ans;
    int len[n-1];
    for(int i=0;i<n-1;i++){
            long long a,b;
        cin>>a>>b>>len[i];
    vect.push_back( make_pair(a,b) );
        if(vect[i].second>vect[i].first){p=vect[i].second;vect[i].second=vect[i].first;vect[i].first=p;}
    }
ans[0].first=0;ans[0].second=0;
 sort(vect.begin(), vect.end());
 long long x=0,y=0,i=0,count=0;
 while(vect[i].first==vect[i+1].first){count++;x++;y=len[i];ans.push_back( make_pair(x,y) );i++;if(i==n-2){break;}}



return 0;}

