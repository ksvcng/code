#include<bits/stdc++.h>
using namespace std;

int main()
{
        vector <long long> arr;
        string s,temp="";
        int i=0;
        cin.clear();
getline(cin,s);
for(int i=0;i<s.length();i++){
    if(s[i]!=' '){temp+=s[i];}
    else{
        stringstream ss(temp);
        long long te;
        ss>>te;
        arr.push_back(te);temp="";
    }
}
stringstream ss(temp);
        long long te;
        ss>>te;
        arr.push_back(te);
    sort(arr.begin(),arr.end());
   te= arr[arr.size()/2];
   arr[arr.size()/2]=arr[arr.size()/2+1];
   arr[arr.size()/2+1]=te;
    for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
return 0;}

