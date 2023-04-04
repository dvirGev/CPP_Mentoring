#include <iostream>
#include <exception>
#include <vector>
#include "ComplexNumber.hpp"
using namespace std;
namespace math
{
    double div(double x, double y)
    {
        if (y == 0)
        {
            throw invalid_argument("y cant be 0");
        }
        return x /y;
    }

    double sum(int x, int y)
    {
        cout << "int int" << endl;
        return x + y;
    }
    double sum(int x, int y, int z)
    {
        cout << "int int int" << endl;
        return x + y + z;
    }
    double sum(double x, double y, double z)
    {
        cout << "double double double" << endl;
        return x + y + z;
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void stam()
{
    math::Numbers nums;
    //code
}
// using namespace math;
int main(int argc, char const *argv[])
{
    cout << math::div(5,8) << endl;
    try
    {
        cout << math::div(5,0) << endl;
    }
    catch(invalid_argument e)
    {
        cout << e.what() << endl;
    }
    cout << math::sum(5, 8) << endl;
    cout << math::sum(5, 8, 7) << endl;
    cout << math::sum(5.5, 8.75, 7.0) << endl;
    math::ComplexNumber c(5,8);
    c.print();
    math::ComplexNumber d = c;
    d.print();
    d.setReal(3);
    d.setComplex(5);
    c.print();

    math::ComplexNumber& ref = c;
    ref.setReal(3);
    ref.setComplex(5);
    c.print();

    int a = 4, b = 3;
    swap(a,b);
    cout << "a=" << a << " b=" << b << endl;

    vector<int> vec = {0, 1, 2, 3, 4};
    return 0;
}
