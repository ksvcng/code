#include<bits/stdc++.h>
using namespace std;
struct node{
long long x,y;
int pos;
};
int absl(int a,int b){
if(a>b){return(a-b);}
return(b-a);
}

int main()
{   long long int t;
    cin>>t;
    while(t--){

        set<struct node > st;
        set<struct node>::iterator it = st.begin();
    //set<struct node>::iterator it1, it2;
    set< pair<int,int> > stt;
    set< pair<int,int> >::iterator it1, it2;

        int n;cin>>n;
        struct node arr[n];
        vector < struct node > ee;
vector < struct node > eo;
vector < struct node > oe;
vector < struct node > oo;


        for(long long i=0;i<n;i++){
    cin>>arr[i].x>>arr[i].y;
    if((arr[i].x)%2==0 ){
        if((arr[i].y)%2==0){ee.push_back(arr[i]);}
       else {eo.push_back(arr[i]);}
    }
    else{
        if((arr[i].y)%2==0){oe.push_back(arr[i]);}
       else {oo.push_back(arr[i]);}
    }

    arr[i].pos=i;
  //  st.insert(arr[i]);
   // stt.insert(make_pair(arr[i].x,arr[i].y));
}

int cou=0,ttt=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(absl(arr[i].pos,arr[j].pos)!=1 && absl(arr[i].pos,arr[j].pos)!=n-1){
            int a=(arr[i].x+arr[j].x)/2;
            int b=(arr[i].y+arr[j].y)/2;
            stt.insert(make_pair(a,b));
            cout<<a<<"  "<<b<<endl;
            int sz=stt.size();
            cout<<"stt.size()= "<<sz<<endl;
            if(sz==4){ttt=1;break;}
    }

    }
    if(ttt==1){cout<<"i= "<<i<<endl;break;}
}
cout<<endl<<endl;
for (it1 = stt.begin(); it1!=stt.end();  ++it1)
         cout<<it1->first<<" "<<it1->second<<endl;



    }
return 0;}


