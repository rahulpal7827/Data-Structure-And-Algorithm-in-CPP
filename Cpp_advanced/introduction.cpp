#include <iostream>
using namespace std;

int main() {
    int rollno;
    char section;
    double sgpa;
    string name;

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Enter roll number, section, and SGPA: ";
    cin >> rollno >> section >> sgpa;

    cout << "\n----- Student Details -----\n";

    cout << "Name      : " << name << endl;
    cout << "Roll No   : " << rollno << endl;
    cout << "Section   : " << section << endl;
    cout << "SGPA      : " << sgpa << endl;

    return 0;
}