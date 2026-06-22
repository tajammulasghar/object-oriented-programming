#include <iostream>
using namespace std;

class Interface { public: virtual void run() = 0; };
class App : public Interface { public: void run() override { cout << "Running" << endl; } };

int main()
{
    App a; a.run();
    return 0;
}

/* Description: Simple interface-like class with a pure virtual `run()` and
   a concrete `App` implementing it. */
