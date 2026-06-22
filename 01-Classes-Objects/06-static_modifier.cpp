#include <iostream>
using namespace std;

class Counter
{
    private:
        static int count;
    
    public:
        Counter() { count++; }
        ~Counter() { count--; }
        
        static void display() { cout << "Count: " << count << endl; }
};

int Counter::count = 0;

int main()
{
    Counter c1;
    Counter c2;
    Counter c3;
    
    Counter::display();
    
    {
        Counter c4;
        Counter::display();
    }
    
    Counter::display();
    return 0;
}

/* Description: Demonstrates static keyword for static members shared across
   all instances, and static methods callable without object creation. */
