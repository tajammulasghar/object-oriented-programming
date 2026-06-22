#include <iostream>
using namespace std;

class Animal
{
    public:
        void eat() { cout << "Eating" << endl; }
};

class Dog : public Animal
{
    public:
        void bark() { cout << "Barking" << endl; }
};

int main()
{
    Dog d;
    d.eat();
    d.bark();
    return 0;
}

/* Description: Single inheritance where `Dog` inherits `Animal` and reuses
   base functionality while adding its own. */
