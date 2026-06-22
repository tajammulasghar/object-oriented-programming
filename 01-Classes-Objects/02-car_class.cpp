#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:
        string model;
        int year;

    public:
        Car(string m = "", int y = 0) : model(m), year(y) {}
        string getModel() { return model; }
        int getYear() { return year; }
};

int main()
{
    Car c("Toyota", 2010);
    cout << "Model: " << c.getModel() << ", Year: " << c.getYear() << endl;
    return 0;
}

/* Description: Basic `Car` class showing simple data members and an example
   of object construction and accessors for beginners. */
