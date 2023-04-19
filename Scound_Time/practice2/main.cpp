#include <iostream>
#include "Point.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
    Point p0(0,0);
    Point p1(1,1);
    cout << (p0 + p1) << endl;
    //p0.operator+(p1) != p1.operator+(p0);
    //operator<<(ostream Point);
    cout << (p1 * 5) << endl;
    cout << (5 * p1) << endl;
    cout << (++p0) << endl;
    cout << (p0++) << endl;
    cout << (p0) << endl;
    
    return 0;
}
