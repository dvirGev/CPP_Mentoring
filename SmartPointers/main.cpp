#include <iostream>
using namespace std;

class Func
{
public:
    void foo()
    {
        cout << "Hello" << endl;
    }
};

template <typename T>
class SharedSmartPointer
{
private:
    T *ptr;
public:
 
    SharedSmartPointer(T *ptr): ptr(ptr){}
    T &operator*()
    {
        return *ptr;
    }
    T *operator->()
    {
        return ptr;
    }
    ~SharedSmartPointer()
    {
        delete ptr;
    }
};

int main(int argc, char const *argv[])
{
    SharedSmartPointer ptr1(new Func);
    ptr1->foo();
    {
        SharedSmartPointer ptr2 = ptr1;
    }
    ptr1->foo();
    return 0;
}

