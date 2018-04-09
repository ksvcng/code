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
    int n,count=0;
    cin>>n;
    int ans[n];f(0,n){ans[i]=0;}
    int arr[n][n];
    vector <int> index;
    f(0,n){f1(0,n){cn arr[i][j];if(arr[i][j]==1){ans[i]=INT_MAX;}else if(arr[i][j]==2){ans[j]=INT_MAX;}else if(arr[i][j]==3){ans[i]=ans[j]=INT_MAX;}}}
    f(0,n){if(ans[i]==0){count++;pu(index,(i+1))}}cout<<count;nl
    f(0,index.size()){cout<<index[i]<<" ";}


return 0;}

