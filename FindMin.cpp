#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int n;
        cout << "Enter size of array: ";
        cin >> n;

        int a[100];

        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int min = a[0];

        for (int i = 1; i < n; i++) {
            if (a[i] < min) {
                min = a[i];
            }
        }

        cout << "Minimum number is: " << min << endl;

        cout << "\nDo you want to continue (Y/N): ";
        cin >> choice;

        if (choice == 'N' || choice == 'n') {
            cout << "Program ended." << endl;
        }
        else if (choice != 'Y' && choice != 'y') {
            cout << "Invalid entry!" << endl;
        }

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
/* find the minimum number in an array*/
