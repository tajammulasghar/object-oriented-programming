#include <iostream>
using namespace std;

class Number
{
    private:
        int value;

    public:
        Number(int v) : value(v) {}
        Number(const Number &n) : value(n.value) {}
        int getValue() { return value; }
};

int main()
{
    Number a(5);
    Number b = a;
    cout << b.getValue() << endl;
    return 0;
}

/* Description: Demonstrates a copy constructor copying internal state.
   Simple example to illustrate copy semantics. */
