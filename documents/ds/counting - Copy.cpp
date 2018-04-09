



















int siz=0;

#include<bits/stdc++.h>
using namespace std;


int* SieveOfEratosthenes(int n)
{
	bool prime[n+1];
	int count=0;
	memset(prime, true, sizeof(prime));
	for (int p=2; p*p<=n; p++){  if (prime[p] == true){for (int i=p*2; i<=n; i += p)prime[i] = false;}}
	for (int p=2; p<=n; p++){if (prime[p]){count++;}}
	cout<<count;
	int *arr = new int[count];

	int i=0;
	for (int p=2; p<=n; p++){if (prime[p]){arr[i++]=p*p;}}
	siz=count;

	for(i=0;i<siz;i++){cout<<arr[i]<<" ";}
	return arr;
}

int main() {
    int n,q,r,till;
    cin>>till;
    int* arri=SieveOfEratosthenes(till);


    int size1=siz;
      cout<<size1;
      for(int i=0;i<size1;i++){cout<<endl<<arri[i]<<" ";}

    n=size1;
    q=n/20;
    r=n%20;
    int count=0;
    cout<<" n= "<<n<<" q= "<<q<<" r= "<<r<<endl;
    if(n>20){n=20;}
    while(q>=0){

    for(int j=1;j<=100;j++){
            for(int k=20*count;k<=n;k++){
                                cout<<arri[k]*j;
                                if(k*j<10){cout<<"   ";}
                                else if(k*j<100){cout<<"  ";}
                                else {cout<<" ";}
                                  }
                            cout<<endl;
                          }
                          count++;
                          cout<<endl<<endl;q--;
                          if(q<0){break;}
                         else if(q==0) { n=20*count+r;}
                         else {n=20*(count+1);}
    }
return 0;}
