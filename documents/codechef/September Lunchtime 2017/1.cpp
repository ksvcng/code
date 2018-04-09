#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
int main()
{

    string data[7]={"cakewalk","simple","easy","easy-medium","medium","medium-hard","hard"};

    long long t,a=0;
    int i;
    cin>>t;
    string ans[t];
    for(i=0;i<t;i++)
    {
       long long n;
       int p=0,count=0;
       cin>>n;
        vector<string> st;
        for(i=0;i<n;i++)
        {
          string temp;
            cin>>temp;
            st.push_back(temp);
        }
        for(i=0;i<n;i++)
    {

        if(data[p]==st[i])
        {
            if(p==3){p++;}
            if(p==5){p++;}
        p++;
        count++;
        i=-1;
        if(p==7)
            break;


    }
    if(i==n-1){
                if(p==3 || p==5)
                {
                i=-1;
                p++;
                }
             }

    }
    if(count==5)
        ans[a]="Yes";
    else
        ans[a]="No";
    a++;




    }
    for(i=0;i<t;i++)
    {
    cout<<ans[i]<<endl;
    }


  return 0;
}




