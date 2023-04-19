#include <iostream>
using namespace std;
class Point
{
private:
    double x, y;
public:
    Point(double x, double y) : x(x), y(y){}
    Point operator+(const Point &p2) const
    {
        return Point(this->x+p2.x, this->y + p2.y);
    }
    Point &operator+=(const Point &p2)
    {
        this->x += p2.x;
        this->y += p2.y;
        return *this;
    }
    Point operator*(double a)
    {
        return Point(this->x*a, this->y*a);
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
    friend Point operator*(double a, const Point &p);
    friend ostream &operator<<(ostream &os, const Point &p);
    // ~Point();
};
ostream &operator<<(ostream &os, const Point &p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}
Point operator*(double a, const Point &p)
{
    return Point(p.x*a, p.y*a);
}