/**
#include<bits/stdc++.h>
using namespace std;
int main()
{


long long n,q;
cin>>n>>q;
string s[n];
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    s[i] = bitset<31>(a).to_string();
}

int interval=floor(sqrt(n));
int div[interval][31];
for(int i=0;i<interval;i++){
        for(int j=0;j<31;j++){
    div[i][j]=0;}
}

int x=0;
for(int i=0;i<interval;i++){
for(int j=0;j<interval;j++){
    for(int k=0;k<31;k++){
        if(s[i*interval+j][k]=='1'){div[i][k]=div[i][k]+1;}
    }
    x++;
}
}
if(x<n){
    for(int i=x;i<n;i++){
        for(int j=0;j<31;j++){
            if(s[i][j]=='1'){div[interval-1][j]++;}
        }
    }
}

int v[interval];
for(int i=0;i<interval;i++){
   v[i]=(i+1)*interval;v[i]--;
}
v[interval-1]+=n-(interval*interval);


while(q--){
         bitset<31> st;
        long long l,r;
        cin>>l>>r;
int tt[31];
for(int i=0;i<31;i++){tt[i]=0;}
if((r-l)<=2*interval || n<20){
        for(int i=l-1;i<=r-1;i++){
for( int j=0;j<31;j++){
    if(s[i][j]=='1'){tt[j]++;}
}}
for(int i=0;i<31;i++){
    if(tt[i]<(r-l+1-tt[i])){st[30-i]=1;}
}
}

else{

        l--;r--;
    int fst=0,lst=0,j=0,flag=0,fs=0,fe=0;
    for(int i=0;i<31;i++){
        if(l<=v[i] && fs==0){fst=i;fs=1;}
        if(r<=v[i] && fe==0){lst=i;fe=1;}
        if(fs==1 && fe==1){break;}
    }

     for(int i=fst+1;i<lst;i++){
         transform(tt, tt+31, div[i], tt, plus<int>());
     }
     if(l==0){transform(tt, tt+n, div[fst], tt, plus<int>());}
     else if(fst>0 && l==v[fst-1]+1){transform(tt, tt+n, div[fst], tt, plus<int>());}
     else{
        for(int i=l;i<=v[fst];i++){
            for( int j=0;j<31;j++){
    if(s[i][j]=='1'){tt[j]++;}
}
        }
     }
      if(r==v[lst]){transform(tt, tt+n, div[lst], tt, plus<int>());}
      else {
        for(int i=v[lst-1]+1;i<=r;i++){
        for( int j=0;j<31;j++){
    if(s[i][j]=='1'){tt[j]++;}
}
        }
      }
for(int i=0;i<31;i++){
    if(tt[i]<(r-l+1-tt[i])){st[30-i]=1;}
}
}

unsigned long decimal = std::bitset<31>(st).to_ulong();
cout<<decimal<<endl;
}

return 0;}

*/


#include<bits/stdc++.h>
using namespace std; int main() { long long n,q; cin>>n>>q; string s[n]; for(int i=0;i<n;i++){ int a; cin>>a; s[i] = bitset<31>(a).to_string(); } int interval=floor(sqrt(n)); int div[interval][31]; for(int i=0;i<interval;i++){ for(int j=0;j<31;j++){ div[i][j]=0;} } int x=0; for(int i=0;i<interval;i++){ for(int j=0;j<interval;j++){ for(int k=0;k<31;k++){ if(s[i*interval+j][k]=='1'){div[i][k]=div[i][k]+1;} } x++; } } if(x<n){ for(int i=x;i<n;i++){ for(int j=0;j<31;j++){ if(s[i][j]=='1'){div[interval-1][j]++;} } } } int v[interval]; for(int i=0;i<interval;i++){ v[i]=(i+1)*interval;v[i]--; } v[interval-1]+=n-(interval*interval); while(q--){ bitset<31> st; long long l,r; cin>>l>>r; int tt[31]; for(int i=0;i<31;i++){tt[i]=0;} if((r-l)<=2*interval || n<20){ for(int i=l-1;i<=r-1;i++){ for( int j=0;j<31;j++){ if(s[i][j]=='1'){tt[j]++;} }} for(int i=0;i<31;i++){ if(tt[i]<(r-l+1-tt[i])){st[30-i]=1;} } } else{ l--;r--; int fst=0,lst=0,j=0,flag=0,fs=0,fe=0; for(int i=0;i<31;i++){ if(l<=v[i] && fs==0){fst=i;fs=1;} if(r<=v[i] && fe==0){lst=i;fe=1;} if(fs==1 && fe==1){break;} } for(int i=fst+1;i<lst;i++){ transform(tt, tt+31, div[i], tt, plus<int>()); } if(l==0){transform(tt, tt+n, div[fst], tt, plus<int>());} else if(fst>0 && l==v[fst-1]+1){transform(tt, tt+n, div[fst], tt, plus<int>());} else{ for(int i=l;i<=v[fst];i++){ for( int j=0;j<31;j++){ if(s[i][j]=='1'){tt[j]++;} } } } if(r==v[lst]){transform(tt, tt+n, div[lst], tt, plus<int>());} else { for(int i=v[lst-1]+1;i<=r;i++){ for( int j=0;j<31;j++){ if(s[i][j]=='1'){tt[j]++;} } } } for(int i=0;i<31;i++){ if(tt[i]<(r-l+1-tt[i])){st[30-i]=1;} } } unsigned long decimal = std::bitset<31>(st).to_ulong(); cout<<decimal<<endl; } return 0;}
