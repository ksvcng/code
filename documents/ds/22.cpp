#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
    /*
     * Complete the function below.
    */

string decodeMessage(string input1)
{
	 vector<string> table;//10270201020303030033010
	 int n=input1.length();
	 int i,count=0,j,flag=0;
	 string s,ans="";
     table.push_back("NULL");
	 for(i=1;i<27;i++){s=96+i;table.push_back(s);}
 //  for(i=0;i<27;i++){cout<<i<<"------>"<<table[i] <<endl; }
    // for(i=0;i<n-1;i++){if(input1[i]=='0' && input1[i+1]!='0')count++;}
     //string array[n-count-1];cout<<count;
     if(input1[0]=='0' || input1[n-1]!='0'){ans= "invalid";}
     else{
     vector<string> arr;
     string tmp="";
     input1+='-1';
for(i=0;i<n;i++){if(input1[i]=='0' && input1[i+1]!='0'){arr.push_back(tmp);tmp="";}
                else{ tmp+=input1[i];}
                }
//for(i=0;i<arr.size();i++){cout<<arr[i]<< " ";}
//cout<<"p";
//cout<<" table size is "<<table.size()<<" ";
tmp="";
 vector<int > arri;
 for(i=0;i<arr.size();i++){stringstream alpha(arr[i]);int x=0;alpha>>x;arri.push_back(x);}
 //for(i=0;i<arri.size();i++){cout<<arri[i]<<" ";}
     for(i=0;i<(arr.size()-1);i++){
            //for(j=0;j<table.size();j++){
            if(flag==0){
                    cout<<"table.size() = "<<table.size()<<" arri[i] = "<<arri[i]<<" ans= "<<ans<<endl;
       if(arri[i]<table.size()){
            cout<<" loop enter a "<<" arri[i]= "<<arri[i]<<"  "<<endl;
            ans+=table[arri[i]];
            if(arri[i+1]<table.size()){tmp=table[arri[i]]+table[arri[i+1]][0];table.push_back(tmp);tmp="";}
            else if (arri[i+1]=table.size()){tmp=table[arri[i]]+table[arri[i]][0];table.push_back(tmp);tmp="";}
            else if(arri[i+1]>table.size()){flag=1;ans="invalid";break;}

       }
       else{flag=1;ans="invalid";}

    // }
     }
 //for(j=0;j<table.size();j++){cout<<j<<"------>"<<table[j] <<endl; }
 //cout<<"i= "<<i<<arr[i+1]<<endl;
 for(j=(table.size()-2);j>=26;j--){if(table[(table.size()-1)]==table[j]){flag=1;ans="invalid";break;}}

     }

     //cout<<"pp "<<ans;
     if(flag==0){
          //  cout<<" loop a  ans = "<<ans<<endl;
            if(arri[arr.size()-1]<table.size()){
             //   cout<<" loop b ans = "<<ans;
                ans+=table[arri[arr.size()-1]];}
                    else{ans="invalid";}
     }



     }
    // cout<<"ss"<<ans;

//cout<<"rr";
	 // cout<<"   end  ";
     return ans;



}



int main() {

    string output;
    string ip1;
    getline(cin, ip1);
    output = decodeMessage(ip1);
    cout << output << endl;
    return 0;
}
