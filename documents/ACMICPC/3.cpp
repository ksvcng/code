#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
/**struct node{
int a;
int b;
};*/

int main()
{   long long int t;
    cin>>t;
    while(t--){

int n,cc=0;
cin>>n;
int arr[n],inte[n];
int flag=0;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]>0){flag=1;}

}
for(int i=0;i<n;i++){
    cin>>inte[i];
}
vector < int > pos;
for(int i=0;i<n;i++){
    if(arr[i]>0){pos.push_back(inte[i]);}
}
if(flag==0){cout<<"#laughing_arjun"<<endl;}
else if(pos.size()==1){cout<<"#laughing_arjun"<<endl;}
else{
//for(int i=0;i<pos.size();i++){cout<<pos[i]<<" ";}
for(int i=0;i<pos.size()-1;i++){
if(pos[i]>pos[i+1]){pos.erase(pos.begin() + (i));break;}
}
//for(int i=0;i<pos.size();i++){cout<<pos[i]<<" ";}
for(int i=0;i<pos.size()-1;i++){
if(pos[i]>pos[i+1]){cc=9;break;}
}

if(cc<=1){cout<<"#laughing_arjun"<<endl;}
else{cout<<"#itsnot_arjun"<<endl;}
}
    }
return 0;}

