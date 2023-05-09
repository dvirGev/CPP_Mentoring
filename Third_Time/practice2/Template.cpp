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
    int a = 1;
    int b = 2;
    mySwap<int>(a, b);
    cout <<"a="<<a<<endl;
    cout <<"b="<<b<<endl;

    char c = 'c';
    char d = 'd';
    mySwap<char>(c, d);
    cout <<"c="<<c<<endl;
    cout <<"d="<<d<<endl;
    return 0;
}
