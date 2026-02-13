#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int n, count = 0;

        cout << "Enter a number: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }

        if (count == 2)
            cout << "It is a prime number" << endl;
        else
            cout << "It is a composite number" << endl;

        cout << "Do you want to continue (Y/N): ";
        cin >> choice;

        while (choice != 'Y' && choice != 'y' &&
               choice != 'N' && choice != 'n') {
            cout << "Invalid entry! Do you want to continue (Y/N): ";
            cin >> choice;
        }

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended.";
    return 0;
}




/* find whether the given number is prime or composite*/
