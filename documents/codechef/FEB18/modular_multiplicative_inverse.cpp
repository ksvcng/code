// C++ program to find modular inverse of a under modulo m
// This program works only if m is prime.
#include<iostream>
using namespace std;

// To find GCD of a and b
long long gcd(long long a, long long b);

// To compute x raised to power y under modulo m
long long power(long long x,  long long y,  long long m);

// Function to find modular inverse of a under modulo m
// Assumption: m is prime
void modInverse(long long a, long long m)
{
	long long g = gcd(a, m);
	if (g != 1)
		cout << "Inverse doesn't exist";
	else
	{
		// If a and m are relatively prime, then modulo inverse
		// is a^(m-2) mode m
		cout << "Modular multiplicative inverse is "
			<< power(a, m-2, m);
			long long aaa=power(a, m-2, m);
			if(aaa*a%m==1){cout<<  "yes" <<endl;}
	}
}

// To compute x^y under modulo m
long long power(long long x,  long long y,  long long m)
{
	if (y == 0)
		return 1;
	long long p = power(x, y/2, m) % m;
	p = (p * p) % m;

	return (y%2 == 0)? p : (x * p) % m;
}

// Function to return gcd of a and b
long long gcd(long long a, long long b)
{
	if (a == 0)
		return b;
	return gcd(b%a, a);
}

// Driver Program
int main()
{
    while(1){
	long long a = 5, m = 100007;
	cin>>a>>m;
	cout<<gcd(a, m);
    }
	return 0;
}

