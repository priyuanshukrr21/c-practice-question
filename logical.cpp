#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student students[5];
    int n, choice, searchRoll;

    cout << "Enter number of students: ";
    cin >> n;

    // Store student data
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> students[i].rollNo;

        cout << "Name: ";
        cin >> students[i].name;

        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Menu
    cout << "\n===== COLLEGE MANAGEMENT =====\n";
    cout << "1. Display All Students\n";
    cout << "2. Search Student\n";
    cout << "3. Find Topper\n";
    cout << "Enter choice: ";
    cin >> choice;

    // Display
    if (choice == 1) {

        for (int i = 0; i < n; i++) {
            cout << "\nRoll No: " << students[i].rollNo;
            cout << "\nName: " << students[i].name;
            cout << "\nMarks: " << students[i].marks << endl;
        }
    }

    // Search
    else if (choice == 2) {

        cout << "Enter Roll No to search: ";
        cin >> searchRoll;

        bool found = false;

        for (int i = 0; i < n; i++) {

            if (students[i].rollNo == searchRoll) {
                cout << "\nStudent Found!";
                cout << "\nName: " << students[i].name;
                cout << "\nMarks: " << students[i].marks;

                found = true;
                break;
            }
        }

        if (!found)
            cout << "\nStudent Not Found!";
    }

    // Topper
    else if (choice == 3) { 

        int topper = 0;

        for (int i = 1; i < n; i++) {
            if (students[i].marks > students [topper].marks) {
                topper = i;
            }
        }

        cout << "\n===== TOPPER =====";
        cout << "\nName: " << students[topper].name;
        cout << "\nRoll No: " << students[topper].rollNo;
        cout << "\nMarks: " << students[topper].marks;
    }

    else {
        cout << "\nInvalid Choice!";
    }

    return 0;
}