#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
int i, j,count=0;
for(i=2; i<1000000000; i++) {
for(j=2; j <= sqrt(i); j++)
if(!(i%j)) break; // if factor found, not prime
if(j > sqrt(i)) {cout << i << " is prime\n";count++;}
}
cout<<count;
return 0;
}
