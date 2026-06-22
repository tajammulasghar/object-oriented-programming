#include <iostream>
using namespace std;

class Person { public: void info() { cout << "Person" << endl; } };
class Student : public Person { public: void study() { cout << "Student" << endl; } };
class Teacher : public Person { public: void teach() { cout << "Teacher" << endl; } };

int main()
{
    Student s; s.info(); s.study();
    Teacher t; t.info(); t.teach();
    return 0;
}

/* Description: Hierarchical inheritance: multiple derived classes (`Student`,
   `Teacher`) inherit from the same base `Person`. */
