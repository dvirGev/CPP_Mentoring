#include <iostream>
using namespace std;
class Point
{
private:
    double x, y;

public:
    Point(double x, double y) : x(x), y(y)
    {
        cout << "Point constructor" << endl;
    };
    friend ostream &operator<<(ostream &os, const Point &p);
    ~Point()
    {
        cout << "Point destructor" << endl;
    }
};
class Line
{
private:
    Point p1, p2;
public:
    Line(double x1, double y1, double x2, double y2) :p1(x1,y1), p2(x2, y2)
    {
        cout << "Line constructor" << endl;
    } 
    ~Line()
    {
        cout << "Line destructor" << endl;
    }
};


ostream &operator<<(ostream &os, const Point &p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}
