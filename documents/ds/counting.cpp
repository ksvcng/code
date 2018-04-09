#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,q,r;

    cout<<"Enter a number till which you want table( for better view no. should be less than 102) : ";
    cin>>n;
    q=n/20;
    r=n%20;
    int count=0;
    cout<<" n= "<<n<<" q= "<<q<<" r= "<<r<<endl;
    if(n>20){n=20;}
    while(q>=0){

    for(int j=1;j<=10;j++){
            for(int k=20*count+1;k<=n;k++){
                                cout<<k*j;
                                if(k*j<10){cout<<"   ";}
                                else if(k*j<100){cout<<"  ";}
                                else {cout<<" ";}
                                  }
                            cout<<endl;
                          }
                          count++;
                          cout<<endl<<endl;q--;
                          if(q<0){break;}
                         else if(q==0) { n=20*count+r;}
                         else {n=20*(count+1);}
    }
return 0;}
