#include <iostream>
using namespace std;

class Number
{
    private:
        int v;
    public:
        Number(int x = 0) : v(x) {}
        int get() { return v; }
        Number operator+(const Number &n) { return Number(v + n.v); }
};

int main()
{
    Number a(2), b(3);
    Number c = a + b;
    cout << c.get() << endl;
    return 0;
}

/* Description: `Number` class overloads `operator+` to add internal values,
   illustrating operator overloading for beginners. */
