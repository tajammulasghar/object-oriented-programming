#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        double salary;

    public:
        Employee(string n = "", double s = 0.0) : name(n), salary(s) {}
        string getName() { return name; }
        double getSalary() { return salary; }
};

int main()
{
    Employee e("Bob", 45000);
    cout << "Employee: " << e.getName() << ", Salary: " << e.getSalary() << endl;
    return 0;
}

/* Description: `Employee` class example with simple constructor and accessors.
   Shows encapsulation of salary and name for beginners. */
