#include <iostream>
using namespace std;

class Temp
{
    public:
        Temp() { cout << "Created" << endl; }
        ~Temp() { cout << "Destroyed" << endl; }
};

int main()
{
    {
        Temp t;
    }
    return 0;
}

/* Description: Shows construction and destruction messages to illustrate
   when destructors run (scope-based lifetime). */
