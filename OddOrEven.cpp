#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int number;

        cout << "Enter a number: ";

        while (!(cin >> number)) {
            cout << "Invalid input! Enter numbers only: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        if (number % 2 == 0) {
            cout << "It is an even number." << endl;
        }
        else {
            cout << "It is an odd number." << endl;
        }

        cout << "Do you want to continue (Y/N): ";
        cin >> choice;

        while (choice != 'Y' && choice != 'y' &&
               choice != 'N' && choice != 'n') {
            cout << "Invalid entry! Do you want to continue (Y/N): ";
            cin >> choice;
        }

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended." << endl;

    return 0;
}

/* find whether the given number is even or odd*/
