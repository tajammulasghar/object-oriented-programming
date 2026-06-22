#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int age;
    public:
        Student(string name, int age) : name(name), age(age) {}
        
        void setName(string name) { this->name = name; }
        void setAge(int age) { this->age = age; }
        
        string getName() { return this->name; }
        int getAge() { return this->age; }
        
        void display() { cout << this->name << " " << this->age << endl; }
};

int main()
{
    Student s("Alice", 20);
    s.display();
    s.setName("Bob");
    s.display();
    return 0;
}

/* Description: Demonstrates the `this->` pointer used to explicitly access
   member variables within class methods. Shows how `this` points to the
   current object instance. */
