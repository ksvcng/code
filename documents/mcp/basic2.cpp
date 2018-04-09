#include<iostream>
using namespace std;
int main()
{
    int p=16;
    int x=19;
    int &y=x;
    cout<<&p;
    cout<<endl;
    cout<<&x;
    cout<<endl;
    cout<<&y;
    cout<<endl;
    cout<<y;
    cout<<endl;
    y++;
    cout<<x;
    cout<<endl;
    cout<<y;
    cout<<endl;
    x++;

    cout<<y;
    cout<<endl;
    cout<<x;

}
