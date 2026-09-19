#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";

        cout << "Roll No: ";
        cin >> s[i].rollNo;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    cout << "\n===== College Student Data =====\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nRoll No: " << s[i].rollNo;
        cout << "\nName: " << s[i].name;
        cout << "\nMarks: " << s[i].marks << endl;
    }

    return 0;
}