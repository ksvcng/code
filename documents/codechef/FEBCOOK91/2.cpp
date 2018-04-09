#include<bits/stdc++.h>
using namespace std;

set< int > pf;
    set< int >::iterator it1, it2;



//vector < int >  pf;
//int s[100000];
//int th[100000];
//int pf[100000];
void printDivisors(int n)
{
    for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            if (n/i == i){pf.insert(i);}

            else {pf.insert(i);pf.insert(n/i);}
        }
    }
}





int main()
{   long long int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    pf.clear();
printDivisors(n);
//for(it1 = pf.begin(); it1!=pf.end();  ++it1){}
//cout<<endl;
//cout<<pf.size()<<" ff "<<endl;
//cout<<a<<endl;
//std::sort(pf.begin(), pf.end());

//for(int i=0;i<pf.size();i++){cout<<pf[i]<<" ";}
//cout<<endl;
vector < int > f;
vector < int > s;
vector < int > th;
int f1=0,f2=0,f3=0;
for(it1 = pf.begin(); it1!=pf.end();  ++it1){
if(*it1 <=a && f1==0){f.push_back(*it1);}
if(*it1<=b && f2==0){s.push_back(*it1);}
if(*it1<=c && f3==0){th.push_back(*it1);}
if(*it1>a && *it1>b && *it1>c){break;}
if(*it1>a){f1=1;}
if(*it1>b){f2=1;}
if(*it1>c){f3=1;}
}
//for(int i=0;i<f.size();i++){cout<<f[i]<<" ";}
//for(int i=0;i<s.size();i++){cout<<s[i]<<" ";}
//for(int i=0;i<th.size();i++){cout<<th[i]<<" ";}
//int sz=th.size();
//cout<<c<<endl;
//cout<<pf.size()<<endl;
long long ans=0;

 /**int ff;

 clock_t begin, end;

double time_spent;

//_initialize();

begin = clock();

*/
for(int i=0;i<f.size();i++){
    for(int j=0;j<s.size();j++){
            long long pp=f[i]*s[j];
            double r=(double)n/pp;
          //  if(r<1){break;}
            if(r==floor(r)){
                   long long x=r;
                if (binary_search(th.begin(), th.end() , r)) {ans++;}
            }
        //else
           // else{cout<<r<<endl;cin>>ff;}


             //if (binary_search(a, a + 10, 2))
       /** for(int k=0;k<th.size();k++){
            if(f[i]*s[j]*th[k]==n){ans++;}
            else if(f[i]*s[j]*th[k]>n){break;}
        } */
    }



}
/**
end = clock();

time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

printf("\nTime Taken %lf", time_spent);

*/
cout<<ans<<endl;
    }
return 0;}

