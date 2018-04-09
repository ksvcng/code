#include<bits/stdc++.h>
using namespace std; string toBinary(int n) { string r; while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;} return r; } long long toInt(long long int a[],long long int po[]){ long long sum=0; for(int i=0;i<31;i++){if(a[i]==1){sum+=po[30-i];}} return sum; } int main() { long long int n,q; cin>>n>>q; int a[n]; string arr[n]; for(int i=0;i<n;i++) {cin>>a[i]; arr[i]=toBinary(a[i]); if(arr[i].length()<31){ int d=31-arr[i].length(); string add=""; for(int j=0;j<d;j++){add+='0';} arr[i]=add+arr[i]; } } long long po[31]; for(int i=0;i<31;i++){po[i]=pow(2,i);} int posSum[n][31]; for(int l=0;l<n;l++){for(int m=0;m<31;m++){posSum[l][m]=0;}} for(int i=0;i<31;i++){posSum[0][i]=(int)arr[0][i]-'0';} for(int l=0;l<31;l++){for(int m=1;m<n;m++){if(arr[m][l]=='1'){posSum[m][l]=posSum[m-1][l]+1;}else{posSum[m][l]=posSum[m-1][l];}}} while(q--){ long long l,r; cin>>l>>r; l--;r--; long long int ans[31],diff; diff=r-l+1;diff=ceil((double)diff/2); for(int i=0;i<31;i++){ans[i]=0;} for(int i=0;i<31;i++){ int c=posSum[r][i]-posSum[l][i]+(int)arr[l][i]-'0'; if(c<diff)ans[i]=1; } cout<<toInt(ans,po)<<endl; } return 0;}


























/**
#include<bits/stdc++.h>
using namespace std;
string toBinary(int n)
{    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
long long toInt(long long int a[],long long int po[]){
long long sum=0;
for(int i=0;i<31;i++){if(a[i]==1){sum+=po[30-i];}}
return sum;
}
int main()
{   long long int n,q;
    cin>>n>>q;
    int a[n];
    string arr[n];
    for(int i=0;i<n;i++)
        {cin>>a[i];
        arr[i]=toBinary(a[i]);
        if(arr[i].length()<31){
            int d=31-arr[i].length();
            string add="";
            for(int j=0;j<d;j++){add+='0';}
            arr[i]=add+arr[i];
        }
        }
        long long po[31];
for(int i=0;i<31;i++){po[i]=pow(2,i);}
int posSum[n][31];
for(int l=0;l<n;l++){for(int m=0;m<31;m++){posSum[l][m]=0;}}
for(int i=0;i<31;i++){posSum[0][i]=(int)arr[0][i]-'0';}
for(int l=0;l<31;l++){for(int m=1;m<n;m++){if(arr[m][l]=='1'){posSum[m][l]=posSum[m-1][l]+1;}else{posSum[m][l]=posSum[m-1][l];}}}
    while(q--){
long long l,r;
cin>>l>>r;
l--;r--;
long long int ans[31],diff;
diff=r-l+1;diff=ceil((double)diff/2);
for(int i=0;i<31;i++){ans[i]=0;}
for(int i=0;i<31;i++){
    int c=posSum[r][i]-posSum[l][i]+(int)arr[l][i]-'0';
    if(c<diff)ans[i]=1;
}
cout<<toInt(ans,po)<<endl;
    }
return 0;}
*/
