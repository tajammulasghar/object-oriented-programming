#include <iostream>
using namespace std;

class A { public: void funcA() { cout << "A" << endl; } };
class B { public: void funcB() { cout << "B" << endl; } };
class C : public A, public B { public: void funcC() { cout << "C" << endl; } };

int main()
{
    C c;
    c.funcA();
    c.funcB();
    c.funcC();
    return 0;
}

/* Description: Multiple inheritance where `C` inherits from both `A` and `B`.
   Shows accessing methods from multiple base classes. */
