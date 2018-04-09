#include<bits/stdc++.h>
using namespace std;
int main(){
while(1){
    cout<<" Enter your last semester till which result has been declared "<<endl;
    int sem;
    cin>>sem;
    float sgpa[sem],sum=0,cgpa;
   int  credit[]={29,30,23,23,22,25,15,15};
   int tc=0;

    cout<<"Enter your SGPA details "<<endl;
    for(int i=0;i<sem;i++){cout<<"SEMESTER "<<i+1<<"    ";cin>>sgpa[i];}
    for(int i=0;i<200000000;i++){int a=0;}
    cout<<" Fetching data . ";
     for(int i=0;i<200000000;i++){int a=0;}cout<<". ";
      for(int i=0;i<200000000;i++){int a=0;}cout<<". ";
       for(int i=0;i<200000000;i++){int a=0;}cout<<". "<<endl;
        cout<<" Calculating result . ";
     for(int i=0;i<200000000;i++){int a=0;}cout<<". ";
      for(int i=0;i<200000000;i++){int a=0;}cout<<". ";
       for(int i=0;i<200000000;i++){int a=0;}cout<<". "<<endl;
       for(int i=0;i<sem;i++){
        sum+=credit[i]*sgpa[i];tc+=credit[i];
         cout<<" Your CGPA till "<<i+1<<"th"<<" semester is  "<<sum/tc<<endl;
       }
       cgpa=(float)sum/tc;
       cout<<" Your CGPA is "<<cgpa<<endl;
       if(cgpa>=8){cout<<" GREAT!!!!  YOU ARE A GENIOUS  "<<endl;}
       else if(cgpa>=7.5){cout<<" VERY GOOD ... KEEP IT UP "<<endl;}
       else if(cgpa>=7.00){cout<<" CONGRATULATIONS YOU GOT DISTINCTION "<<endl;}
       else if(cgpa>=6.00){cout<<" GOOD ... BUT YOU CAN DO BETTER "<<endl;}
       else {cout<<" IMPROVE IMPROVE IMPROVE ... DANGER  ZONE...."<<endl;}

}
return 0;
}
