#include <iostream>
using namespace std;
int main() {
    int age; double weight, length, calories; char gender;
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter weight in kg: ";
    cin >> weight;

    cout << "Enter length in cm: ";
    cin >> length;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    if (gender == 'M' || gender == 'm') {
        calories = 6.25 * length + 10 * weight
            - age * 5 + 5;
        cout << "Calories = " << calories;
    }
    else if (gender == 'F' || gender == 'f') {
        calories = 6.25 * length + 10 * weight
            - age * 5 - 161;
        cout << "Calories = " << calories;
    }
    else {
        cout << "Invalid gender";
    }

    return 0;
}
