#include<bits/stdc++.h>
#define f( a,b) for(int i=a;i<b;i++)
#define f1( a,b) for(int j=a;j<b;j++)
#define nl cout<<endl;
#define sp cout<<" ";
#define vect(c) vector<int> c;
#define vect1(n,s) vector<int> n(s);
#define co cout<<
#define cn cin>>
#define pu(a,b) a.push_back(b);
#define input freopen ("input.txt","r",stdin);
#define output freopen("output.txt","w",stdout);

using namespace std;
int main()
{
     int T; scanf("%d", &T);
     int n=20;
     vector< pair<int ,int> >in;
for(int m=101;m<104;m++){
    for(int n=101;n<103;n++){
        in.push_back(make_pair(m,n));
    }
}
in.push_back(make_pair(101,101));in.push_back(make_pair(101,102));in.push_back(make_pair(101,103));
in.push_back(make_pair(102,101));in.push_back(make_pair(102,103));in.push_back(make_pair(102,103));
 for(int i=1;i<=T;i++){
int n,sum=0,startx=100,endx=104,starty=100,endy=103,flag=0;
int arr[5][4];
for(int m=0;m<5;m++){
    for(int n=0;n<4;n++){
        arr[m][n]=0;
    }
}
int st[6];for(int i=0;i<6;i++){st[i]=1;}
int ch=0;

    for(int j=0;j<1000;j++){
            while(st[ch]!=1){ch++;ch=ch%6;}

            int p,q;
      printf("%d %d\n",in[ch].first,in[ch].second);
      fflush(stdout);
      scanf("%d%d",&p,&q);
        if(p==-1 && q==-1){flag=1;break;}
        else if(p==0 && q==0){break;}
        else{
                int xx=0;
            arr[p-100][q-100]=1;
            for(int pp=in[ch].first-100-1;pp<=in[ch].first-100+1;pp++){
                for(int qq=in[ch].second-100-1;qq<=in[ch].second-100+1;qq++){
                    if(arr[pp][qq]==0){xx=1;break;}
                    if(xx==0){st[ch]=0;}
                }
            }
            ch++;ch=ch%6;


        }
    }
        if(flag==1){break;}
    }
return 0;}



