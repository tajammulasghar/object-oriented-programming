#include <iostream>
using namespace std;

class B;
class A { private: int x = 5; friend class B; };
class B { public: void reveal(A &a) { cout << a.x << endl; } };

int main()
{
    A a; B b; b.reveal(a);
    return 0;
}

/* Description: Shows `friend class` usage where `B` can access private
   members of `A`. */
