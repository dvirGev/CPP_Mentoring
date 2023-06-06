#include <iostream>
using namespace std;

class a
{
private:

public:
    // a();
    void getName()
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

int main(int argc, char const *argv[])
{
    b obj;
    obj.getName();
    a *r = (a*)&obj;
    r->getName();
    return 0;
}

