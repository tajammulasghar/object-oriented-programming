#include <iostream>
using namespace std;

class Demo
{
    private:
        int x;

    public:
        Demo() { x = 0; }
        int getX() { return x; }
};

int main()
{
    Demo d;
    cout << d.getX() << endl;
    return 0;
}

/* Description: Demonstrates a default constructor initializing member values.
   Beginner example for constructors. */
