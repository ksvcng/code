#include<bits/stdc++.h>
using namespace std;
struct node{
long long x,y;
int pos;
};
int absl(int a,int b){
if(a>b){return(a-b);}
return(b-a);
}
int main()
{    long long t;
    cin>>t;
    while(t--){
long long n;
cin>>n;
struct node arr[n];
vector < struct node > ee;
vector < struct node > eo;
vector < struct node > oe;
vector < struct node > oo;
set< pair<int,int> > stt;
    set< pair<int,int> >::iterator it1, it2;
for(long long i=0;i<n;i++){
    cin>>arr[i].x>>arr[i].y;
    arr[i].pos=i;
    if((arr[i].x)%2==0 ){
        if((arr[i].y)%2==0){ee.push_back(arr[i]);}
       else {eo.push_back(arr[i]);}
    }
    else{
        if((arr[i].y)%2==0){oe.push_back(arr[i]);}
       else {oo.push_back(arr[i]);}
    }
}
int d=n/10;
int cou=0,ttt=0, sz=0,found=0;
if(ee.size()>=2){
for(int i=0;i<ee.size();i++){
    for(int j=i+1;j<ee.size();j++){
             if(absl(ee[i].pos,ee[j].pos)!=1 && absl(ee[i].pos,ee[j].pos)!=n-1){
            int a=(ee[i].x+ee[j].x)/2;
            int b=(ee[i].y+ee[j].y)/2;
            stt.insert(make_pair(a,b));
            sz=stt.size();
            if(sz==d){ttt=1;break;}}}
     if(ttt==1){break;}
}}
if(ttt==0 && eo.size()>=2){
    for(int i=0;i<eo.size();i++){
    for(int j=i+1;j<eo.size();j++){
             if(absl(eo[i].pos,eo[j].pos)!=1 && absl(eo[i].pos,eo[j].pos)!=n-1){
            int a=(eo[i].x+eo[j].x)/2;
            int b=(eo[i].y+eo[j].y)/2;
            stt.insert(make_pair(a,b));
            sz=stt.size();
            if(sz==d){ttt=1;break;}
    }}
     if(ttt==1){break;}
}}

if(ttt==0 && oo.size()>=2){
    for(int i=0;i<oo.size();i++){
    for(int j=i+1;j<oo.size();j++){
             if(absl(oo[i].pos,oo[j].pos)!=1 && absl(oo[i].pos,oo[j].pos)!=n-1){
            int a=(oo[i].x+oo[j].x)/2;
            int b=(oo[i].y+oo[j].y)/2;
            stt.insert(make_pair(a,b));
            sz=stt.size();
            if(sz==d){ttt=1;break;}
    }}
     if(ttt==1){break;}
}}

if(ttt==0 && oe.size()>=2){
    for(int i=0;i<oe.size();i++){
    for(int j=i+1;j<oe.size();j++){
             if(absl(oe[i].pos,oe[j].pos)!=1 && absl(oe[i].pos,oe[j].pos)!=n-1){
            int a=(oe[i].x+oe[j].x)/2;
            int b=(oe[i].y+oe[j].y)/2;
            stt.insert(make_pair(a,b));
            sz=stt.size();
            if(sz==d){ttt=1;break;}
    }}
     if(ttt==1){break;}
}}
for (it1 = stt.begin(); it1!=stt.end();  ++it1)
         cout<<it1->first<<" "<<it1->second<<endl;
    }
return 0;}
