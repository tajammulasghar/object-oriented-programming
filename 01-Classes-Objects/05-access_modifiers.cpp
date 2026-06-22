#include <iostream>
using namespace std;

class Base
{
    public:
        int publicVar = 10;
    
    private:
        int privateVar = 20;
    
    protected:
        int protectedVar = 30;
    
    public:
        void display() 
        { 
            cout << "Public: " << publicVar << endl;
            cout << "Private: " << privateVar << endl;
            cout << "Protected: " << protectedVar << endl;
        }
};

class Derived : public Base
{
    public:
        void show()
        {
            cout << "Derived accessing public: " << publicVar << endl;
            cout << "Derived accessing protected: " << protectedVar << endl;
        }
};

int main()
{
    Base b;
    b.display();
    
    Derived d;
    d.show();
    
    return 0;
}

/* Description: Demonstrates access modifiers - public (accessible everywhere),
   private (accessible only in the class), and protected (accessible in the
   class and derived classes). */
