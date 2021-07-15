#include <iostream>

using namespace std;

int main()
{
    double y = 0;
    for (int x = 100; x < 200; x++)
    {
        y = (x * x) + 2 * x;
        cout<<"When x is" + x ": x^2 + 2(x) = " + y<<endl; 
    }
    return 0;
}