#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int age;

    public:
        Student(string n = "", int a = 0) : name(n), age(a) {}

        void setName(string n) { name = n; }
        void setAge(int a) { age = a; }

        string getName() { return name; }
        int getAge() { return age; }
};

int main()
{
    Student s("Alice", 20);
    cout << "Name: " << s.getName() << ", Age: " << s.getAge() << endl;
    return 0;
}

/* Description: Simple `Student` class demonstrating private members with public
   getters and setters. Intended as a beginner example for classes and objects. */
