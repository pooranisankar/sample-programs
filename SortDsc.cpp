#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int n;
        cout << "Enter size of array: ";
        cin >> n;

        int a[100], temp;

        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] < a[j]) {   
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        cout << "Sorted array in descending order is: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;

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
/* sort an array in descending order*/
