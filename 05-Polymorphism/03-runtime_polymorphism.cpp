#include <iostream>
using namespace std;

class Base { public: virtual void show() { cout << "Base" << endl; } };
class Derived : public Base { public: void show() override { cout << "Derived" << endl; } };

int main()
{
    Base *b = new Derived();
    b->show();
    delete b;
    return 0;
}

/* Description: Runtime polymorphism via a virtual function; `Derived` overrides
   `show()` and is invoked through a `Base*`. */
