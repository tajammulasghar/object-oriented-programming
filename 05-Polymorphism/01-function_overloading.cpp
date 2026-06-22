#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }

auto main() -> int
{
    cout << add(2,3) << " " << add(1,2,3) << endl;
    return 0;
}

/* Description: Demonstrates function overloading with two `add` variants
   (different parameter lists) showing compile-time polymorphism. */
