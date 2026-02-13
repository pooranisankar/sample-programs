#include <iostream>
#include <string>
using namespace std;

int main() {
    char choice;

    do {
        string str = "dare devil";
        char ch = 'd';
        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ch) {
                count++;
            }
        }

        cout << "Occurrence of '" << ch << "' in string is: " << count << endl;

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
/* count the occurrence of a character in a string and ask user whether to continue or not*/
