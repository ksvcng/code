#include<bits/stdc++.h>
using namespace std;
int k,i,j,x;
int main(){
	cin>>k;
	clock_t begin, end;

double time_spent;

begin = clock();
	for(i=19;k;++i){
		for(x=0,j=i;j;j/=10)x+=j%10;
		if(x==10)--k;
	}
	cout<<i-1<<endl;
	end = clock();

time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

printf("\nTime Taken %lf ", time_spent);
	return 0;
}


//printf("%d\n", fib(n));

