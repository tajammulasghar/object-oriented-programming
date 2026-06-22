#include <iostream>
using namespace std;

class A { public: void fa() { cout << "A" << endl; } };
class B : public A { public: void fb() { cout << "B" << endl; } };
class C : public B { public: void fc() { cout << "C" << endl; } };

int main()
{
    C c;
    c.fa();
    c.fb();
    c.fc();
    return 0;
}

/* Description: Multilevel inheritance example: C -> B -> A demonstrating
   inherited access to ancestors' members. */
