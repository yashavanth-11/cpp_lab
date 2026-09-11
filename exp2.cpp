#include <iostream>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    Point add(const Point &P) const { return Point(x + P.x, y + P.y); }
    Point &set_x(int v)
    {
        this->x = v;
        return *this;
    }
    Point &set_y(int v)
    {
        this->y = v;
        return *this;
    }
    void show() const { cout << "(" << x << "," << y << ")\n"; }
};
void shift(Point &P) { P.set_x(99); }
void tryShift(Point p) { p.set_x(-1); }
int main()
{
    Point a(1, 2), b(3, 4);
    Point c = a.add(b);
    c.show();
    Point d;
    d.set_x(7).set_y(8);
    d.show();
    shift(a);
    a.show();
    tryShift(b);
    b.show();
    return 0;
}