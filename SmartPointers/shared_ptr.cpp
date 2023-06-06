// C++ program to demonstrate the working of shared_ptr
// Here both smart pointer P1 and P2 are pointing to the
// object Addition to which they both maintain a reference
// of the object
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
class SharedSmartPointer
{
private:
    int *counter;
    T *ptr;
public:
 
    SharedSmartPointer(T *ptr): ptr(ptr), counter(new int(1)){}
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
    const int &count()
    {
        return *counter;
    }
    ~SharedSmartPointer()
    {
        (*counter)--;
        if(*counter == 0)
        {
            delete counter;
            delete ptr;
        }
    }
};

int main()
{
	//---\/ Smart Pointer
	shared_ptr<Rectangle> P1(new Rectangle(10, 5));
	// This'll print 50
	cout << P1->area() << endl;

	shared_ptr<Rectangle> P2;
	P2 = P1;

	// This'll print 50
	cout << P2->area() << endl;

	// This'll now not give an error,
	cout << P1->area() << endl;

	// This'll also print 50 now
	// This'll print 2 as Reference Counter is 2
	cout << P1.use_count() << endl;

    SharedSmartPointer ptr1(new Rectangle(5,5));
    cout << ptr1->area() << endl;
    cout << ptr1.count() << endl;
    {
        SharedSmartPointer ptr2 = ptr1;
        cout << ptr2->area() << endl;
        cout << ptr1.count() << endl;
    }
    cout << ptr1->area() << endl;
    cout << ptr1.count() << endl;
	return 0;
}
