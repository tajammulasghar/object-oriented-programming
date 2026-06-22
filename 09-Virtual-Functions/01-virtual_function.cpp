#include <iostream>
using namespace std;

class Parent { public: virtual void msg() { cout << "Parent" << endl; } };
class Child : public Parent { public: void msg() override { cout << "Child" << endl; } };

int main()
{
    Parent *p = new Child();
    p->msg();
    delete p;
    return 0;
}

/* Description: Demonstrates virtual functions where `Child` overrides `msg()`
   and the override is called via a `Parent*`. */
