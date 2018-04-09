#include<iostream>
using namespace std;
int main()
{
    int t,na=0,nb=0,i;
    cin>>t;
    while(t--){
            string s;
            int x,y;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            na++;
        }
        else{
            nb++;
        }
    }

    //cout<<na<<nb;
    cin>>x>>y;
    if(x==1 && y==1)
    {
        if(na>=nb)
        {
            while(nb!=0)
            {
                cout<<"a";
                na--;
                cout<<"b";
                nb--;

            }
            for(i=0;i<na;i++)
            {
                cout<<"a";
                if(i!=na-1)
                    cout<<"*";
            }
        }
        else{
            while(na!=0)
            {
                cout<<"b";
                nb--;
                cout<<"a";
                na--;

            }
            for(i=0;i<nb;i++)
            {
                cout<<"b";
                if(i!=nb-1)
                    cout<<"*";
            }


        }
    }
    cout<<endl;

    }

    return 0;
}
