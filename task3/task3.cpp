#include <iostream>
using namespace std;
int main() {
    double score1, score2, score3, average;
    cout << "Enter three course scores: ";
    cin >> score1 >> score2 >> score3;

    average = (score1 + score2 + score3) / 3;

    cout << "Average = " << average << endl;

    if (average >= 90 && average <= 100)
        cout << "Grade A";
    else if (average >= 70 && average < 90)
        cout << "Grade B";
    else if (average >= 50 && average < 70)
        cout << "Grade C";
    else if (average >= 0 && average < 50)
        cout << "Grade F";
    else
        cout << "Invalid scores";

    return 0;
}
