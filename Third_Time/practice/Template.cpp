#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main(int argc, char const *argv[])
{
    int intA = 1;
    int intB = 2;
    mySwap<int>(intA,intB);
    cout << "a = " << intA << endl;
    cout << "b = " << intB << endl;

    char charA = 'A';
    char charB = 'B';
    mySwap<char>(charA,charB);
    cout << "a = " << charA << endl;
    cout << "b = " << charB << endl;
    return 0;
}
