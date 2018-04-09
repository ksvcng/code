#include<iostream>
//#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,n,k,i;
    cin>>t;
    while(t--){
            int flag=0;
        int s[n];
        for(i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n);
        if(k==0){
            for(i=0;i<n;i++){
                     if(i>0){
                    while(s[i]==s[i-1])
                        i++;
                    }
                if(s[i]!=i)
                {cout<<i<<endl;
                flag=1;
                break;}
            }
            if(flag==0)
                cout<<i<<endl;
        }
        else{
            flag=k;
            int j=0;
            for(i=0;i<n;i++){
                if(i>0){
                    while(s[i]==s[i-1])
                        i++;
                    }
                if(s[i]!=j)
                {
                    if(flag!=0){
                    flag--;
                    i--;
                    }
                    else
                       {
                           cout<<j<<"a"<<endl;flag=0;
                       }

                }
                j++;


            }
            if(i==n && flag!=0)
            {
                for(i=0;i<flag;i++)
                {
                   j++;
                }
                cout<<j<<"b"<<endl;
            }





        }



    }




return 0;
}
