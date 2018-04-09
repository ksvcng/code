#include<iostream>
#include<conio.h>
using namespace std;
int area(int,int);
float area(int);
int main()
{
int a,b,p;
float q;
cin>>a>>b;
p=area(a,b);

cout<<endl<<p;
cout<<endl;
q=area(a);
cout<<endl<<q;

}
int area(int x,int y)
{
    cout<<"rect area with dimension "<<x<<" and "<<y<<"is "<<x*y;
    return (x*y);
}

float area(int x)
{
    cout<<"circle area with radius "<<x<<" is "<<(3.14*x*x);
    return(3.14*x*x);
}
