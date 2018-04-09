

#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t;
    cin>>t;
    while(t--){
int n,k;
cin>>n>>k;
int a[n],d[n],p[k];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int cc=0;
for(int i=0;i<n;i++){
    cin>>d[i];if(d[i]!=1){cc=1;}
}

for(int i=0;i<k;i++){
    cin>>p[i];
}

if(cc==0){
       // cout<<"d"<<endl;
    sort(a,a+n);
    int flag=0;
    int first=0,last=n-1;
    for(int i=0;i<k;i++){
        if(i%2==0){
            first=last-p[i]+1;
        }
        else{
            last=first+p[i]-1;
        }

       // if(first>last){break;flag=1;}
    }
   // if(flag==1){cout<<"0"<<endl;}
   // else{
        long long ans=0;
//cout<<first<<" "<<last<<endl;
        for(int i=first;i<=last;i++){ans+=a[i];}
        cout<<ans<<endl;
    ///}

}

 else{
 vector< pair <int,int> > vec;
  vector< pair <int,int> > vect;
 for (int i=0; i<n; i++){
        vect.push_back( make_pair(a[i],d[i]) );
        vec.push_back( make_pair(a[i],d[i]) );
        }
    sort(vect.begin(), vect.end());
    sort(vec.begin(), vec.end());

    int first =n-1,last=n-1;
    int fi=vect[n-1].second;
    int li=vect[n-1].second;
//for(int i=0;i<n;i++){
   // cout<<vect[i].first<<" ";
//}
//cout<<endl;
for(int i=0;i<k;i++){
    if(i%2==0){
        if(i==0){last=n-1;li=vect[last].second;}
         else{  last=first;li=fi;}
            while(p[i]>0){
            if(p[i]<li){li=p[i];p[i]=0;}
            else{
                    //int ff=0;
       // while(p>0){
            last--;p[i]=p[i]-li; li=vect[last].second;

       // }
            }
            }
    }


    else{
            first=last;fi=li;
 while(p[i]>0){
if(p[i]<fi){fi=p[i];p[i]=0;}
            else{
                    //int ff=0;
       // while(p>0){
            first++;p[i]=p[i]-fi; fi=vect[first].second;

       // }
            }




 }

    }
}

cout<<first<<" "<<last<<" "<<fi<<" "<<li<<endl;
long long ans=0;
if(first!=last){ans+=li*(vect[last].first);
ans+=fi*(vect[first].first);


for(int q=last+1;q<first;q++){
    ans=ans+(vect[q].first)*(vect[q].second);
}}

else{ ans=li*vect[last].first;}
cout<<ans<<endl;
 }


    }
return 0;}
