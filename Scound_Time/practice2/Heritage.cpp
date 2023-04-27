#include <iostream>
using namespace std;

class a
{
private:
    
public:
    // a();
    virtual void getName()
    {
        cout << "a" << endl;
    }
    virtual string get() = 0;
    // ~Shape();
};
class b:a
{
private:
    /* data */
public:
    // b(/* args */);
    virtual void getName()
    {
        cout << "b" << endl;
    }
    string get()
    {
        return "hello";
    }
    // ~b();
};
class c:b
{
private:
    /* data */
public:
    // b(/* args */);
    virtual void getName()
    {
        cout << "c" << endl;
    }
    // ~b();
};
class Animal
{
private:
    /* data */
public:
    virtual string getName() = 0;
    virtual int numberOfLegs() = 0;
};
class Dog:Animal
{
private:
    /* data */
public:
   virtual string getName()
   {
        return "Dog";
   }
    virtual int numberOfLegs()
    {
        return 4;
    }
};


int main(int argc, char const *argv[])
{
    c obj;
    obj.getName();
    b &r = (b&)obj;
    r.getName();
    return 0;
}

