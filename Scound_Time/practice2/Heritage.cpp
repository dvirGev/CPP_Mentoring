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
    virtual string get()
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

int main(int argc, char const *argv[])
{
    c obj;
    obj.getName();
    a &p = (a&)obj;
    p.getName();
    return 0;
}

