#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int n;

        cout << "Enter a number: ";

        while (!(cin >> n)) {
            cout << "Invalid input! Enter numbers only: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        if (n <= 1) {
            cout << "It is neither prime nor composite." << endl;
        }
        else {
            int count = 0;

            for (int i = 1; i <= n; i++) {
                if (n % i == 0) {
                    count++;
                }
            }

            if (count == 2)
                cout << "It is a prime number" << endl;
            else
                cout << "It is a composite number" << endl;
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
/* find whether the given number is prime or composite*/
