#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    double marks[5];
    double sum = 0;

    cout << "Enter marks of 5 subjects:\n";

    for(int i = 0; i < 5; i++) {
        cin >> marks[i];

        if(marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks entered!";
            return 0;
        }

        sum += marks[i];
    }

    double percentage = sum / 5;

    cout << "\nStudent: " << name << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if(percentage >= 90)
        cout << "Marvelous! GRADE - A";
    else if(percentage >= 80)
        cout << "Excellent! GRADE - B";
    else if(percentage >= 70)
        cout << "Better! GRADE - C";
    else if(percentage >= 60)
        cout << "Good! GRADE - D";
    else
        cout << "FAIL";

    return 0;
}