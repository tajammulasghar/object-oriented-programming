#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int age;

    public:
        void setName(string n) { name = n; }
        void setAge(int a) { age = a; }
        string getName() { return name; }
        int getAge() { return age; }
};

int main()
{
    Student s;
    s.setName("Charlie");
    s.setAge(19);
    cout << s.getName() << " " << s.getAge() << endl;
    return 0;
}

/* Description: Encapsulation example using private members with public
   setters/getters for `Student`. */
