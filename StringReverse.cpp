#include <iostream>
#include <string>
using namespace std;

int main() {
    char choice;

    do {
        string s, rev = "";

        cout << "Enter a string to reverse: ";
        cin >> s;

        for (int i = s.length() - 1; i >= 0; i--) {
            rev += s[i];
        }

        cout << "Reversed string is: " << rev << endl;

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
