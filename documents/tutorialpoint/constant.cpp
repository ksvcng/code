#include <iostream>
using namespace std;
#define LENGTH 10
#define WIDTH 5
#define NEWLINE "\n"
int main()
{
int area;
area = LENGTH * WIDTH;
cout << area;
cout << NEWLINE;
return 0;
}
//or
/**
#include <iostream>
using namespace std;
int main()
{
const int LENGTH = 10;
const int WIDTH = 5;
const char NEWLINE = '\n';
int area;
area = LENGTH * WIDTH;
cout << area;
cout << NEWLINE;
return 0;
}
*/
