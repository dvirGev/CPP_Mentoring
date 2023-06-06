#include <iostream>
// Dynamic Memory management library
#include <memory>
using namespace std;

 
class Rectangle {
    int length;
    int breadth;
 
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
 
    int area() { return length * breadth; }
};
template <typename T>
class UniqueSmartPointer
{
private:
    T *ptr;
public:
 
    UniqueSmartPointer(T *ptr): ptr(ptr){}
    UniqueSmartPointer(UniqueSmartPointer &other)
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
    ~UniqueSmartPointer()
    {
        delete ptr;
    }
};
int main()
{
    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << P1->area() << endl; // This'll print 50
 
    // unique_ptr<Rectangle> P2(P1);
    unique_ptr<Rectangle> P2;
    P2 = move(P1);
 
    // This'll print 50
    cout << P2->area() << endl;
 
    //cout<< P1->area() <<endl;

    UniqueSmartPointer ptr1(new Rectangle(5,5));
    cout << ptr1->area() << endl;
    UniqueSmartPointer ptr2 = ptr1;
    cout << ptr2->area() << endl;
    //cout << ptr1->area() << endl;

    return 0;
}