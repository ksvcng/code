#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int x,hh,mm;
    cin>>x;
    cin>>hh>>mm;
    int count=0;
   if(hh%10==7 || mm%10==7){cout<<"0";}
  else{
    while(hh%10!=7 && mm%10!=7)
    {
        mm=mm-x;
        if(mm<0){hh--;mm=60+mm;
        if(hh<0){hh+=24;}
        }
        count++;
    }
    cout<<count;
  }


return 0;}


