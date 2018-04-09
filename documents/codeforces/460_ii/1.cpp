#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int n,m;
cin>>n>>m;
float min=999999999;
for(int i=0;i<n;i++){int a,b;
cin>>a>>b;
float h=(float)a/b;//out<<h<<endl;
if(h<min)min=h;}
cout << fixed << setprecision(8) <<min*m;


return 0;}

