#include <iostream>
using namespace std;

template <typename T>
T Biggest(T* array, int size)
{
    T max = array[0];
    for (int i = 0; i < size; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

class greater_than_n
{
private:
    double n;
public:
    greater_than_n(double n): n(n){}
    bool operator()(double m)
    {
        return m > n;
    }
};
int main(int argc, char const *argv[])
{
    greater_than_n g(100);
    cout << g(50) << endl;
    cout << g(150) << endl;
    return 0;
}
