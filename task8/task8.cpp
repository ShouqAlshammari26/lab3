#include <iostream> 
using namespace std;
int main() {
    string id; int age, seats, price = 0; char classType;
    cout << "Please enter your ID: ";
    cin >> id;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Choose class (A, B, C): ";
        cin >> classType;

        switch (classType) {
        case 'A':
        case 'a':
            price = 100;
            break;

        case 'B':
        case 'b':
            price = 75;
            break;

        case 'C':
        case 'c':
            price = 50;
            break;

        default:
            cout << "Invalid class";
            return 0;
        }

        cout << "Enter number of seats: ";
        cin >> seats;

        if (seats > 0)
            cout << "Total cost = " << seats * price;
        else
            cout << "Invalid number of seats";
    }
    else {
        cout << "Sorry, you are not allowed to book a seat";
    }

    return 0;
}
