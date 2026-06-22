#include <iostream>
using namespace std;

class Complex
{
    private:
        double r, i;
    public:
        Complex(double rr=0, double ii=0): r(rr), i(ii) {}
        Complex operator+(const Complex &c) { return Complex(r + c.r, i + c.i); }
        void print() { cout << r << "+" << i << "i" << endl; }
};

int main()
{
    Complex a(1,2), b(3,4);
    Complex c = a + b;
    c.print();
    return 0;
}

/* Description: `Complex` class with `operator+` overloaded to add complex
   numbers and a small print helper. */
