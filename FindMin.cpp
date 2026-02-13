#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int a[6] = {9, 5, 7, 3, 8, 2};
        int min = a[0];

        for (int i = 1; i < 6; i++) {
            if (a[i] < min) {   
                min = a[i];
            }
        }

        cout << "Minimum number is: " << min << endl;

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




/* find the minimum number in an array*/
