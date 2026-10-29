#include <iostream>
using namespace std;
int main() {
    double temp; char unit;
    cout << "Please enter the temperature and measurement system (c or f): ";
    cin >> temp >> unit;

    if (unit == 'c' || unit == 'C') {
        cout << (temp * 9.0 / 5.0) + 32
            << " degrees Fahrenheit";
    }
    else if (unit == 'f' || unit == 'F') {
        cout << (temp - 32) * 5.0 / 9.0
            << " degrees Celsius";
    }
    else {
        cout << "Invalid measurement system";
    }

    return 0;
}
