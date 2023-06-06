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
class SmartPointer
{
private:
    T *ptr;
public:
 
    SmartPointer(T *ptr): ptr(ptr){}
    T &operator*()
    {
        return *ptr;
    }
    T *operator->()
    {
        return ptr;
    }
    ~SmartPointer()
    {
        delete ptr;
    }
};

template <typename T>
class UniqeSmartPointer
{
private:
    T *ptr;
public:
 
    UniqeSmartPointer(T *ptr): ptr(ptr){}
    UniqeSmartPointer(UniqeSmartPointer &other)
    {
        this->ptr = other.ptr;
        other.ptr = nullptr;
    }
    T &operator*()
    {
        return *ptr;
    }
    T *operator->()
    {
        return ptr;
    }
    ~UniqeSmartPointer()
    {
        delete ptr;
    }
};
template <typename T>
class SharedSmartPointer
{
private:
    int *counter;
    T *ptr;
public:
 
    SharedSmartPointer(T *ptr): ptr(ptr)
    {
        counter = new int(1);
    }
    SharedSmartPointer(SharedSmartPointer &other)
    {
        this->ptr = other.ptr;
        this->counter = other.counter;
        (*counter)++;
    }
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
        (*counter)--;
        if((*counter) == 0)
        {
            delete ptr;
            delete counter;
        }
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

