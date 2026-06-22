#include <iostream>
using namespace std;

class Vehicle { public: virtual void drive() { cout << "Vehicle" << endl; } };
class Car : public Vehicle { public: void drive() override { cout << "Car" << endl; } };

int main()
{
    Vehicle *v = new Car();
    v->drive();
    delete v;
    return 0;
}

/* Description: Runtime polymorphism using `Vehicle` base and `Car` derived
   class to show overridden `drive()` method invocation. */
