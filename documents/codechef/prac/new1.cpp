#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%I64d",&x)
#define p(x) printf("%I64d\n",x)
#define sc(x) scanf("%s",x)
#define pc(x) printf("%s",x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define M 1000000007
#define N 100005
#define inf 2e9
#define PQG priority_queue< int,std::vector<int>,std::greater<int> >
#define PQL priority_queue< int,std::vector<int>,std::less<int> >
#define PQPL priority_queue<pii ,vector< pii >, less< pii > >
#define PQPG priority_queue<pii ,vector< pii >, greater< pii > >
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    int k;
    cin>>k;
    clock_t begin, end;

double time_spent;

begin = clock();

    int cnt=0,i=1;
    while(true){
        int sum=0,var=i;
        while(var){
            sum+=(var%10);
            var/=10;
        }
        if(sum==10) cnt++;
        if(cnt==k) break;
        ++i;
    }
    cout<<i;
    end = clock();

time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

printf("\nTime Taken %lf ", time_spent);

}






//printf("%d\n", fib(n));

