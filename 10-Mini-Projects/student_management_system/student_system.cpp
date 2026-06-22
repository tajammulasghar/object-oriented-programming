#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        int rollNo;
        string name;
        double marks[3];
    
    public:
        Student(int roll = 0, string n = "");
        void setMarks(double m1, double m2, double m3);
        double getAverage();
        void display();
};

Student::Student(int roll, string n) : rollNo(roll), name(n) { }

void Student::setMarks(double m1, double m2, double m3)
{
    marks[0] = m1;
    marks[1] = m2;
    marks[2] = m3;
}

double Student::getAverage()
{
    return (marks[0] + marks[1] + marks[2]) / 3.0;
}

void Student::display()
{
    cout << "Roll: " << rollNo << ", Name: " << name;
    cout << ", Marks: " << marks[0] << " " << marks[1] << " " << marks[2];
    cout << ", Average: " << getAverage() << endl;
}

int main()
{
    Student s1(1, "Alice");
    Student s2(2, "Bob");
    Student s3(3, "Charlie");
    
    cout << "=== Student Management System ===" << endl;
    
    s1.setMarks(85, 90, 88);
    s2.setMarks(75, 80, 78);
    s3.setMarks(92, 95, 90);
    
    cout << "\n--- Student Records ---" << endl;
    s1.display();
    s2.display();
    s3.display();
    
    cout << "\n--- Averages ---" << endl;
    cout << "Alice Average: " << s1.getAverage() << endl;
    cout << "Bob Average: " << s2.getAverage() << endl;
    cout << "Charlie Average: " << s3.getAverage() << endl;
    
    return 0;
}

/* Description: Student Management System with Student class for managing
   student records, marks, and average calculation. */
