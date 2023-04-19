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
    }
    Point operator+(const  Point &other) const
    {
        return Point(this->x+other.x,this->y + other.y);
    } 
    Point &operator+=(const Point &other)
    {
        this->x += other.x;
        this->y += other.y;
        return *this;
    }
    Point operator*(const double a)
    {
        return Point(this->x*a, this->y*a);
    }
    Point &operator*=(const double a)
    {
        this->x *= a;
        this->y *= a;
        return *this;
    }
    Point &operator++()
    {
        this->x++;
        this->y++;
        return *this;
    }
    Point operator++(int)
    {
        Point res(*this);
        this->x++;
        this->y++;
        return res;
    }
    friend Point operator*(const double a, const Point &p);
    friend ostream &operator<<(ostream &os, const Point &p);
    ~Point()
    {
        cout << "Point destructor" << endl;
    }
};
ostream &operator<<(ostream &os, const Point &p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}
Point operator*(const double a, const Point &p )
{
    return Point(p.x*a, p.y*a);
}

class Line
{
private:
    Point p1, p2;
public:
    Line(double x1, double y1, double x2, double y2) : p1(x1, y1), p2(x2,y2)
    {
        cout << "Line constructor" << endl;
    } 
    ~Line()
    {
        cout << "Line destructor" << endl;
    }
};