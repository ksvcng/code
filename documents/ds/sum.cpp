
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


                              FILE *fp;
                    fp=fopen("f1.txt","w");
                   ofstream fout;
                   fout.open("f1.txt");

                             int flag=0;
                            string str="";
                            for(long long i=0;i<n;i++){str+="0";}
                            str[x-1]='2';
                            long long  var=n;
                            long long sm2=0,sm1=0,des=sum/2;
                                                while(var>0){
                                                if(var!=x){
                                                            if(sm1<=sm2){str[var-1]='1';sm1+=var;}
                                                            else{sm2+=var;}
                                                                 }
                                                        var--;
                                                    }

                            // long long p=str.length(),eq=0,eq1=0;

                           // for(long long i=0;i<p;i++){if(str[i]=='1'){eq+=i+1;}}
                           // for(long long i=0;i<p;i++){if(str[i]=='0'){eq1+=i+1;}}
                            if(sm1==des && des==sm2){}
                            else{flag=1;}
                           if(flag==1){
                                     str="";
                            for(long long i=0;i<n;i++){str+="0";}
                           str[x-1]='2';
                             var=n;
                           long long sm=0;
                           des=sum/2;
                                                while(var>0){
                                                if(var!=x){
                                                                if(sm+var<=des){str[var-1]='1'; sm+=var;}
                                                                if(sm==des){break;}
                                                                 }
                                                        var--;
                                                    }
                                                  //  cout<<" inner loop "<<str;

                             long long p=str.length(),eq=0,eq1=0;

                            for(long long i=0;i<p;i++){if(str[i]=='1'){eq+=i+1;}}
                            for(long long i=0;i<p;i++){if(str[i]=='0'){eq1+=i+1;}}
                            if(des==eq && des==eq1){}
                            else{str="impossible";}
                               //cout<<str<<endl;


                            }
                           else{
                              // cout<<str<<endl;}
                        }

                    fout<<str;
                    fout.close();
        }
}
    return 0;

}
