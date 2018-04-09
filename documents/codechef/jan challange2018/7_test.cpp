#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int binaryeq(long long  sum){
int  i=30;
while(sum>=pow(2,17)){
while(pow(2,i)>sum){i--;}
sum=sum-pow(2,i);//cout<<sum<<endl;
}
return sum;
}

/**
int lists(int n){
     int i=31;
    if(n==0){return 0;}
    else if(n==pow(2,17)){return pow(2,17);}
    else{
while(pow(2,i)>n){i--;}}
return((pow(2,i+1)-1));
}
*/
int lists(int x,int n){
     int i=31;
    if(n==0){return 0;}
    else if(n==pow(2,17)){return pow(2,17);}
    else{
while(pow(2,i)>n){i--;}
int temp=pow(2,i+1);
if(x<temp){return x;}
else{
        i=31;
    while(pow(2,i)>x){i--;}
   int j=i;
    while(x>=temp ){if(x-pow(2,j)>=0){x=x-pow(2,j);}j--;}
return x;
}
}
return((pow(2,i+1)-1));
}








int main()
{
    long long n,flag=1,i,tt;
    cin>>n;
    vector <int>  life;
    vector <int> index;
    for(int i=0;i<n;i++){index.push_back(i);}
    for(int i=0;i<n;i++){cin>>tt;life.push_back(tt);if(tt!=1){flag=0;}}
    life.push_back(0);
    long long q;
    if(flag==1){
                cin>>q;
            int zinda[n];
            for(int i=0;i<n;i++){zinda[i]=1;}
            int count=0;
            while(q--){
            long long x,y,prevans;
            cin>>x>>y;
            if(x>=131072){x=binaryeq(x);}
            if(zinda[x]==0){cout<<prevans<<endl;}
        else{
            zinda[x]=0;
            for(int i=0;i<index.size();i++){
                if(( index[i] & x) == index[i]){count++;index.erase(index.begin() + i);i--;}}
                prevans=(n-count);
                cout<<(n-count)<<endl;
            }
                      }
                }
else{
    cin>>q;
   // long long itt=0;
    vector <int> live;
    for(int i=0;i<131073;i++){live.push_back(1);}
    vector <int> visited;
    for(int i=0;i<131073;i++){visited.push_back(0);}
    int zinda[131073];
    for(int i=0;i<131073;i++){zinda[i]=1;}
    vector< vector<int> > arr(131073,vector <int> (0) );
    while(q--){

        long long x,y,count=0,preans,currans;
        cin>>x>>y;
      //  if(index.)
    //  cout<<" zinda ";
//for(int i=0;i<n;i++){cout<<zinda[i]<<" ";}
    //  cout<<endl;
     //  cout<<" live ";
     // for(int i=0;i<n;i++){cout<<live[i]<<" ";}
     // cout<<endl;
      // cout<<"  ";
      //for(int i=0;i<n;i++){cout<<life[i]<<" ";}
     // cout<<endl;
      x=binaryeq(x);x=lists(x,index[index.size()-1]);
    //  cout<<"x= "<<x<<endl;
      //if(x>index[index.size()-1)]{x=index.size()-1;}
    // cout<<"x= "<<x<<endl;
    if(zinda[x]==0){cout<<currans<<endl;}
    else if(visited[x]==1){
          // cout<<" loop two ";
 //cout<<endl<<"  arr[x] contains following elements "<<endl;
       // for(int i=0;i<arr[x].size();i++){cout<<arr[x][i]<<" ";}
      //cout<<endl;
        for(int i=0;i<arr[x].size();i++){
            if(live[arr[x][i]]==0){  arr[x].erase(arr[x].begin() + i);i--;}
                else{life[arr[x][i]]-=y;if(life[arr[x][i]]<=0){live[arr[x][i]] =0;arr[x].erase(arr[x].begin() + i);index.erase(index.begin() + i);i--;}}
                                    }
                                  //   cout<<endl<<" after deletin suitable element arr[x] contains following elements "<<endl;
       // for(int i=0;i<arr[x].size();i++){cout<<arr[x][i]<<" ";}
     // cout<<endl;
                if(arr[x].size()==0){zinda[x]=0;}
                cout<<index.size()<<endl;currans=index.size();
                          }
    else{
       // cout<<" loop threee "<<"  index.size()= "<<index.size()<<" x= "<<x<<endl;
        for(int i=0;i<index.size();i++){if((index[i]&x)==index[i] && live[index[i]]==1 ){arr[x].push_back(index[i]);}}
      //  for(int i=0;i<arr[x].size();i++){cout<<arr[x][i]<<" ";}
      //cout<<endl;

        for(int i=0;i<arr[x].size();i++){
              //  if(live[arr[x][i]==0){  arr[x].erase(arr[x].begin() + i);i--;}
              //  else{
                life[arr[x][i]]-=y;if(life[arr[x][i]]<=0){live[arr[x][i]] =0;arr[x].erase(arr[x].begin() + i);index.erase(index.begin() + i);i--;}}
                                                //}
          // cout<<endl<<" after deletin suitable element arr[x] contains following elements "<<endl;
       // for(int i=0;i<arr[x].size();i++){cout<<arr[x][i]<<" ";}
      //cout<<endl;

      //  vector <int> rlife;
      if(arr[x].size()==0){zinda[x]=0;}
    // cout<<endl<<" after deletin suitable element index is "<<endl;
   //  for(int i=0;i<index.size();i++){cout<<index[i]<<" ";}
    //  cout<<endl;
     //  cout<<" after performing operation  "<<"  index.size()= "<<index.size()<<endl;
   // cout<<" zinda [x]= "<<zinda[x]<<endl;
cout<<index.size()<<endl;
currans=index.size();


/**
        std::vector<int> rlife (life);
         // std:: copy(life, life+n , rlife);
        sort(rlife.begin(),rlife.end());
        for(i=itt;i<n;i++){if(rlife[i]<=0){count++;}
                            else{break;}}
                            cout<<(n-count-itt)<<endl;
                              itt+=count;

                              */
    }
    }
    }
return 0;}

























/**

#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int binaryeq(int  sum){
int  i=30;
//long long sum=n;
while(sum>=pow(2,17)){
while(pow(2,i)>sum){i--;}

sum=sum-pow(2,i);//cout<<sum<<endl;
}
return sum;


}

int lists(int x,int n){
     int i=31;
    if(n==0){return 0;}
    else if(n==pow(2,17)){return pow(2,17);}

    else{



while(pow(2,i)>n){i--;}
int temp=pow(2,i+1);
if(x<temp){return x;}
else{
        i=31;
    while(pow(2,i)>x){i--;}
   // cout<<"  i=  "<<i<<"  temp=  "<<temp;
   int j=i;
    while(x>=temp ){if(x-pow(2,j)>=0){x=x-pow(2,j);}j--;}
//for(int j=i;pow(2,j)>=temp;j--){cout<<"     j= "<<j;x-=pow(2,j);}
//cout<<endl;
return x;


}
}
//if(n<=pow(2,i+1)){return n;}
return((pow(2,i+1)-1));
}




int main()
{


    int n;
    cin>>n;
   cout<<binaryeq(n);
//int tt;
//vector< vector<int> > arr(n,vector <int> (0) );

while(1){
int x;
cin>>n;
   cout<<binaryeq(n);
//cin>>x;
//cin>>n;
//cout<<lists(x,n);
//int limit=lists(binaryeq(x));
//cout<<lists(x)<<endl;
//for(int i=0;i<n;i++){if((i&x)==i){cout<<i<<" ";arr[x].push_back(i);}}
//cout<<" size of arr[x]= "<<arr[x].size();
//for(int i=0;i<arr[x].size();i++){cout<<arr[x][i]<<endl;}



}

 //for(int i=0;i<8;i++){
  //  if(i%2==0){tt=i;arr[0].push_back(tt);}
// }



    /**
    long long n,flag=1,i,tt;
    cin>>n;
    vector <int>  life;
    vector <int> index;
    for(int i=0;i<n;i++){index.push_back(i);}
    for(int i=0;i<n;i++){cin>>tt;life.push_back(tt);if(tt!=1){flag=0;}}
    long long q;
for(i=0;i<life.size();i++){cout<<life[i]<<" ";}
cout<<endl<<" size of life is "<<life.size()<<endl;

if(flag==1){
        cout<<"yes"<<endl;

                cin>>q;
            //long long itt=0;
            int zinda[n];
            for(int i=0;i<n;i++){zinda[i]=1;cout<<zinda[i]<<" ";}
            cout<<endl;
int             count=0;
    while(q--){
        long long x,y,prevans,rem;
        cin>>x>>y;
        if(zinda[x]==0){
                 cout<<" ans calculated using if loop "<<endl;
                cout<<prevans<<endl;
        }

        else{
            zinda[x]=0;
            for(int i=0;i<n;i++){cout<<zinda[i]<<" ";}
           cout<<endl<<" size of index is "<<index.size()<<endl;
            for(int i=0;i<index.size();i++){
                if(( index[i] & x) == index[i]){count++;index.erase(index.begin() + i);i--;}}
               // rem=n-count;
               for(i=0;i<life.size();i++){cout<<life[i]<<" ";}
               cout<<endl;
                prevans=(n-count);
                cout<<" ans calculated using else loop "<<endl;
                cout<<(n-count)<<endl;

            }
        }


            }
*/

