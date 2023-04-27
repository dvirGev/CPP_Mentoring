#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    //The number 7600 has two significant digits - 7,6
    //The number 0.0076 has two significant digits - 7,6
    //The number 7600.0076 has eight significant digits - 7,6,0,0,0,0,7,6
    float pi = 3.14159265359;
    cout << pi << endl;
    cout << setprecision(3) << pi << endl;

    double large = 1234567;
    cout << large << endl;
    cout << setprecision(7) << large << endl;
    return 0;
}



