#include <iostream>
using namespace std;

class Shape { public: virtual void draw() = 0; };
class Circle : public Shape { public: void draw() override { cout << "Circle" << endl; } };

int main()
{
    Shape *s = new Circle();
    s->draw();
    delete s;
    return 0;
}

/* Description: Uses an abstract base `Shape` with a pure virtual `draw()`
   implemented by `Circle` to demonstrate abstraction. */
