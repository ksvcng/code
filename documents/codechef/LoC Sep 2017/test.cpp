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

        string s1=st[n];
        for(i=0;i<2*n;i++)
        {
            if(s1==st[i])
            {
                cout<<i<<"  "<<st[i];
            }
        }

      /** sort(st.begin(),st.end());
       string stend[5];
      // i=0;
     // vector<string> stend;
   for(int j=0;j<=n*2-2;j++)
      {
            if (st[j].compare(st[j+1]) != 0)
            {
            stend[j]=st[j];
            }
            else{
                stend[j]=st[j];
                }
      }

        for(int j=0;j<5;j++)
        {
            cout<<stend[j]<<endl;
        }




    }

    */
}


    return 0;
}
