#include <iostream>
using namespace std;

class Circle
{
    private:
        const double PI = 3.14159;
        double radius;
    
    public:
        Circle(double r) : radius(r) {}
        
        double getArea() const { return PI * radius * radius; }
        
        void setRadius(double r) { radius = r; }
};

int main()
{
    Circle c(5.0);
    cout << "Area: " << c.getArea() << endl;
    
    c.setRadius(10.0);
    cout << "Area: " << c.getArea() << endl;
    
    return 0;
}

/* Description: Demonstrates const keyword for constant member variables and
   const member functions that don't modify object state. */
