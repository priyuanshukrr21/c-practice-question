#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    string branch;
    int semester;
};

int main() {

    Student s;

    cout << "Enter Roll No: ";
    cin >> s.rollNo;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Branch: ";
    cin >> s.branch;

    cout << "Enter Semester: ";
    cin >> s.semester;

    cout << "\n--- Student Details ---\n";
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Branch: " << s.branch << endl;
    cout << "Semester: " << s.semester << endl;

    return 0;
}