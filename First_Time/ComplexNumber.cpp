#include <iostream>
#include "ComplexNumber.hpp"
using namespace std;
namespace math
{
    ComplexNumber::ComplexNumber(double real, double complex)
    {
        this->real = real;
        this->complex = complex;
    }
    void ComplexNumber::print()
    {
        cout << real << " + " << complex << "i\n";
    }
    void ComplexNumber::setReal(double real)
    {
        this->real = real;
    }
    void ComplexNumber::setComplex(double complex)
    {
        this->complex = complex;
    }
    Numbers::Numbers()
    {
        nums = new int[10];
    }
    Numbers::~Numbers()
    {
        delete[] nums;
    }
}