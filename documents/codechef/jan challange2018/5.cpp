
#include<bits/stdc++.h>
using namespace std;
int main()
{    long long t;
     cin>>t;
     while(t--)
        {
            long long  x,n;
            long long  sum=0;
            cin>>x>>n;
            sum=(n*(n+1)/2)-x;

                    if(sum%2!=0 || n<=3){cout<<"impossible"<<endl;}
                    else{

                            string str="";
                            for(long long i=0;i<n;i++){str+="0";}
                            str[x-1]='2';
                            long long  var=n;
                            long long sm=0,des=sum/2;
                                                while(var>0){
                                                if(var!=x){
                                                                if(sm+var<=des){str[var-1]='1'; sm+=var;}
                                                                if(sm==des){break;}
                                                                 }
                                                        var--;
                                                    }

                             long long p=str.length(),eq=0,eq1=0;

                            for(long long i=0;i<p;i++){if(str[i]=='1'){eq+=i+1;}}
                            for(long long i=0;i<p;i++){if(str[i]=='0'){eq1+=i+1;}}
                            if(des==eq && des==eq1){}
                            else{

                                str="";
                                int p=x;
                            for(long long i=0;i<n;i++){str+="0";}
                            str[x-1]='2';
                             var=n;
                             sm=0,des=sum/2;
                                                while(var>0){
                                                if(var!=x){
                                                                if(sm+var<=des){
                                                                        if(des-(sm+var)!=p){
                                                                        str[var-1]='1'; sm+=var;}}
                                                                if(sm==des){break;}
                                                                 }
                                                        var--;
                                                    }
                            }



                               cout<<str<<endl;
                        }


        }
    return 0;
}
