#include <iostream>
#include <string>
using namespace std;

class Patient
{
    private:
        int patientId;
        string name;
        string disease;
        string doctor;
        int roomNo;
    
    public:
        Patient(int id = 0, string n = "", string d = "", string doc = "", int room = 0);
        void display();
        string getDoctorName();
        int getRoomNo();
        void updateDoctor(string doc);
};

Patient::Patient(int id, string n, string d, string doc, int room) 
    : patientId(id), name(n), disease(d), doctor(doc), roomNo(room) {}

void Patient::display()
{
    cout << "ID: " << patientId << ", Name: " << name;
    cout << ", Disease: " << disease << ", Doctor: " << doctor;
    cout << ", Room: " << roomNo << endl;
}

string Patient::getDoctorName() { return doctor; }
int Patient::getRoomNo() { return roomNo; }

void Patient::updateDoctor(string doc)
{
    doctor = doc;
    cout << "Doctor updated to " << doctor << endl;
}

int main()
{
    Patient p1(1001, "Alice", "Fever", "Dr. Smith", 101);
    Patient p2(1002, "Bob", "Headache", "Dr. Jones", 102);
    Patient p3(1003, "Charlie", "Fracture", "Dr. Brown", 103);
    
    cout << "=== Hospital Management System ===" << endl;
    
    cout << "\n--- Patient Records ---" << endl;
    p1.display();
    p2.display();
    p3.display();
    
    cout << "\n--- Doctor Information ---" << endl;
    cout << "Patient 1 Doctor: " << p1.getDoctorName() << endl;
    cout << "Patient 2 Doctor: " << p2.getDoctorName() << endl;
    
    cout << "\n--- Room Information ---" << endl;
    cout << "Patient 1 Room: " << p1.getRoomNo() << endl;
    cout << "Patient 3 Room: " << p3.getRoomNo() << endl;
    
    cout << "\n--- Update Doctor ---" << endl;
    p1.updateDoctor("Dr. Wilson");
    p1.display();
    
    return 0;
}

/* Description: Hospital Management System with Patient class for managing
   patient records, assigned doctors, disease info, and room allocation. */
