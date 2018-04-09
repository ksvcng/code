#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include <iostream>
#include <cstring>

using namespace std;
int fn(string);
int main()
{
    int t,i;
    cin>>t;
    int ans[t];

    for(i=0;i<t;i++)
    {

        int n,k,p;
        cin>>n>>k;
        string input[n];
        count=n;
        for(i=0;i<n;i++)
        {
            input[i]={"0"};
        }
        for(i=0;i<k;i++)
        {

            cin>>p;
            cin>>input[p-1];
        }





    }



 return 0;
}



int fn(string s1)
        {
            string s2[s1.length()];
            strcpy(s2, s1);
        reverse(s1.begin(),s1.end());

        }
