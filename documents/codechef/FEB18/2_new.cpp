#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
string s1,s2;
cin>>s1>>s2;
string s3="",s4="";
    int i=0,count1=0,count2=0;
while(s1[i]!='!' && i<s1.length()){
    s3+=s1[i];i++;
      }
count1=s1.length()-i;

     // for(int j=i;j<s1.length();j++){count1++;}

      i=0;
while(s2[i]!='!' && i<s2.length()){
    s4+=s2[i];i++;
      }
      count2=s2.length()-i;
   // for(int j=i;j<s2.length();j++){count2++;}

long long a,b;
        stringstream sa(s3);
    sa>>a;
    stringstream sb(s4);
    sb>>b;

    //cout<<" a= "<<a<<" b=" <<b<<" count1= "<<count1<<" count 2= "<<count2<<endl;



    if(count1==count2){

    if(a>b){cout<<"1"<<endl;}
    else if(a<b){cout<<"-1"<<endl;}
    else{cout<<"0"<<endl;}

    }
  else  if(count1>count2){
        count1-=count2;
 //if(a>b){cout<<"1"<<endl;}

        // cout<<"count1= "<<count1<<endl;
        int flag=0;
        long long ac=a;
        long long val=1,newv=a;
 for(int kk=0;kk<count1;kk++){
        ac=newv;val=1;//cout<<" first "<<endl;val=1;
            for(long long r=ac;ac>0;ac--){
        val*=ac;//cout<<" value= "<<val<<endl;
 if(val>b){flag=1;break;}
    }
 if(flag==1){break;}
 newv=val;
 }
 if(flag==1){cout<<"1"<<endl;}
 else{
    if(val==b){cout<<"0"<<endl;}
    else{cout<<"-1"<<endl;}
 }




    }

else{


//if(b>a){cout<<"-1"<<endl;}

        count2-=count1;
       // cout<<"count2= "<<count2<<endl;
        int flag=0;
        long long ac=b;
        long long val=1,newv=b;


 for(int kk=0;kk<count2;kk++){
        ac=newv; val=1;//cout<<" f "<<endl;
    for(long long r=ac;ac>0;ac--){
        val*=ac;//cout<<" value= "<<val<<endl;
 if(val>a){flag=1;break;}
    }
 if(flag==1){break;}
 newv=val;
 }
 if(flag==1){cout<<"-1"<<endl;}
 else{
    if(val==a){cout<<"0"<<endl;}
    else{cout<<"1"<<endl;}
 }








}




    }
return 0;}

