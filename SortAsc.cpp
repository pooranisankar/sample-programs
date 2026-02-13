#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int a[6] = {9, 5, 7, 3, 8, 2};
        int temp;

        // Sorting (Inner logic loop)
        for (int i = 0; i < 6; i++) {
            for (int j = i + 1; j < 6; j++) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        cout << "Sorted array is: ";
        for (int i = 0; i < 6; i++) {
            cout << a[i] << " ";
        }
        cout << endl;

        cout << "\nDo you want to continue (Y/N): ";
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





/* sort an array in ascending order*/
