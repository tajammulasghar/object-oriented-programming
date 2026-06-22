#include <iostream>
using namespace std;

class Point
{
    private:
        int x, y;

    public:
        Point(int a, int b) : x(a), y(b) {}
        void print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main()
{
    Point p(3, 4);
    p.print();
    return 0;
}

/* Description: Shows a parameterized constructor and printing a simple Point.
   Useful for learning constructor initialization. */
