
#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
   int p,q,r;

   // sum(p,q);
    cout<<"enter three numbers to sum";
    cin>>p>>q>>r;
    cout<<sum(sum(p,q),r);


}

int sum(int x,int y)
{
  return(x+y);
  // cout<<"sum of "<<x<<" and "<<y<<" is "<<s;
}
