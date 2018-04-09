#include<bits/stdc++.h>
using namespace std;

int getMid(int s, int e) { return s + (e -s)/2; }
int getSumUtil(int *st, int ss, int se, int qs, int qe, int si)
{
	if (qs <= ss && qe >= se)
		return st[si];
	if (se < qs || ss > qe)
		return 0;
	int mid = getMid(ss, se);
	return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
		getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}
void updateValueUtil(int *st, int ss, int se, int i, int diff, int si)
{
	if (i < ss || i > se)
		return;
	st[si] = st[si] + diff;
	if (se != ss)
	{
		int mid = getMid(ss, se);
		updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
		updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
	}
}
void updateValue(int arr[], int *st, int n, int i, int new_val)
{

	if (i < 0 || i > n-1)
	{
		printf("Invalid Input");
		return;
	}
	int diff = new_val - arr[i];
	arr[i] = new_val;
	updateValueUtil(st, 0, n-1, i, diff, 0);
}
int getSum(int *st, int n, int qs, int qe)
{
	if (qs < 0 || qe > n-1 || qs > qe)
	{
		printf("Invalid Input");
		return -1;
	}

	return getSumUtil(st, 0, n-1, qs, qe, 0);
}
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
	if (ss == se)
	{
		st[si] = arr[ss];
		return arr[ss];
	}
	int mid = getMid(ss, se);
	st[si] = constructSTUtil(arr, ss, mid, st, si*2+1) +
			constructSTUtil(arr, mid+1, se, st, si*2+2);
	return st[si];
}
int *constructST(int arr[], int n)
{
	int x = (int)(ceil(log2(n)));
	int max_size = 2*(int)pow(2, x) - 1;
	int *st = new int[max_size];
	constructSTUtil(arr, 0, n-1, st, 0);
	return st;
}

int main()
{   long long int n,m;
cin>>n>>m;
int arr[n*m];
for(int i=0;i<n*m;i++){cin>>arr[i];}
int *st = constructST(arr, n);
int q;
cin>>q;
while(q--){
 int t;
 cin>>t;
 if(t==1){
    int x,y,r;
    cin>>x>>y>>r;
    int d=(x-1)*m + (y-1);
   int tt= arr[d]-r;
    updateValue(arr, st, n, d, tt);
   // cout<<arr[d]<<" gg ";
 }
 if(t==2){
    int x,y,r;
    cin>>x>>y>>r;
    int d=(x-1)*m + (y-1);
   int tt= arr[d]+r;
   updateValue(arr, st, n, d, tt);
   // cout<<arr[d]<<" pg ";
 }
 if(t==3){

    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
     long long sum=0,g=0;
    for(int i=x1;i<=x2;i++){

            int d1=(x1+g-1)*m + (y1-1);
            int d2=(x1+g+1)*m + (y2-1);

            sum+=getSum(st, n, d1,d2 );


           g++;//cout<<sum<<endl;
    }


    //int d2=(x2-1)*m + (y2-1);


cout<<sum<<endl;
 }



}

return 0;}


