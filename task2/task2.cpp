#include <iostream>
using namespace std;
int main() {
    double price, total; int items;
    cout << "Enter item price: ";
    cin >> price;

    cout << "Enter No items: ";
    cin >> items;

    total = price * items;

    if (price >= 100 && items > 2) {
        total = total - (total * 0.05);

        if (total > 1000) {
            total = total - (total * 0.05);
        }
    }
    else {
        total = total + 10;
    }

    cout << "Total cost = " << total;

    return 0;
}
