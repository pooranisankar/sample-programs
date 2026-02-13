#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int a[10] = {3, 6, 8, 9, 2, 7, 2, 5, 2, 2};
        int count = 0;

        for (int i = 0; i < 10; i++) {
            if (a[i] == 2) {
                count++;
            }
        }

        cout << "Occurrence of 2 is: " << count << endl;

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



/* count the occurrence of 2 in an array and ask user whether to continue or not*/
