#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
       vector<string> st;
        for(i=0;i<(2*n);i++)
        {
          string temp;
            cin>>temp;
            st.push_back(temp);
        }
      string orig[2*n];
      for(i=0;i<2*n;i++)
      {
          orig[i]=st[i];
      }
        sort(st.begin(),st.end());
       string stend[2];
      int a=0;
       for(i=1;i<=(n*2)-1;i=i+2)
       {
           if (st[i-1].compare(st[i]) != 0)
           {
            stend[a]=st[i-1];
            a++;
            i--;
           }
       }

        string ans[2*n];
        for(i=0;i<2*n;i++)
       {
           if(orig[i]==stend[0])
           {
               if(i%2==0)
                ans[0]=stend[0];
               else
                ans[0]=stend[1];
           }
       }
       string search=ans[0];
       int count=0;
       for(i=0;i<2*n;i++)
       {
           if(search==orig[i])
           {
               cout<<orig[i]<<"-"<<orig[i+1]<<" ";
               count++;
               if(count==n)
                    {
                   break;
                    }
               search=orig[i+1];
               orig[i+1]="";
               i=-1;
           }
       }
    }
return 0;
}


