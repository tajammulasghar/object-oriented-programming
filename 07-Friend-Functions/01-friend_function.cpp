#include <iostream>
using namespace std;

class Box
{
    private:
        int value;
    public:
        Box(int v): value(v) {}
        friend void show(Box &b);
};

void show(Box &b) { cout << b.value << endl; }

int main()
{
    Box b(42);
    show(b);
    return 0;
}

/* Description: Demonstrates a friend function `show` accessing private data
   of `Box`. */
