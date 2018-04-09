#include<bits/stdc++.h>
using namespace std;
int aa[1005];
int count=0;

void minm(vector < vector <int > >stu,vector<int> high , vector<int >low,int m){
    cout<<stu.size()<<endl;
if(stu.size()<=3){
       // count++;
cout<<" inn "<<stu.size()<<endl;
        for(int i=0;i<m;i++){

    if(stu[0][i]>=stu[stu.size()-1][i]){cout<<high[i]<<" ";}
    else{
        if(high[i]-1>=low[i])
            cout<<high[i]-1<<" ";
         else
            cout<<high[i]<<" ";
    }
        }
}
else{
        int szz=stu.size();
        cout<<" out "<<stu.size()<<endl;
       vector< vector <int > > uh (stu.size()/2);
        for(int p=0;p<stu.size()/2;p++){
                for(int g=0;g<m;g++){
                uh[p].push_back(stu[p][g]);}}
if(stu.size()%2!=0){szz=stu.size()+1;}
       vector< vector <int > > lh (szz);
         for(int p=stu.size()/2;p<stu.size();p++){
                 for(int g=0;g<m;g++){
                lh[p].push_back(stu[p][g]);}}
        /// j=0;
    minm( uh,high,low,m);
    //j=
    minm(lh,high,low,m);
}

}





int main()
{   long long int t;
    cin>>t;
    while(t--){
int n,m;
cin>>n>>m;
int mid=0;

vector<int >low ,high;
vector<int >fh,lh;
//for(int i=0;i<m;i++){fh[i]=0;lh[i]=0;}
//long long fh=0,lh=0;
int temp;
for(int i=0;i<m;i++){

cin>>temp;low.push_back(temp);
cin>>temp;high.push_back(temp);
        }
        //cout<<" yes "<<endl;
vector < vector < int >  >  score (n) ;int kk=0,ll=0;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>temp;
        score[i].push_back(temp);
      //  cin>>score[i][j];
//if(i<n/2){fh[j]+=score[i][j];}
//else {
        //lh[j]+=score[i][j];
    // }
}}

/**if(n%2!=0){
        //cout<<"loop "<<n/2<<" ";
    for(int i=0;i<m;i++){
      //  cout<<"  "<<m<<" lh[m]= "<<lh[m]<<" score[n/2][m]= "<<score[n/2][m]<<endl;
        lh[i]=lh[i]-score[n/2][i];}

}*/
//for(int i=0;i<m;i++){cout<<fh[i]<<"  "<<lh[i]<<endl;}

//int aa[m];
//for(int i=0;i<m;i++){
 //   if(fh[i]>lh[i]){aa[i]=high[i];}
   // else{aa[i]=low[i];}
//}
//for(int i=0;i<m;i++){int p=(high[i]-low[i])/2;cout<<low[i]+p<<" ";}
//for(int i=0;i<m;i++){cout<<aa[i]<<" ";}
minm(score,high,low,m);
cout<<endl;


    }
return 0;}


