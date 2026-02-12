#include <iostream>
#include <string>
using namespace std;

int main() {
    char choice;

    do {
        string s, rev = "";

        cout << "Enter a string: ";
        cin >> s;

        // Reverse logic
        for (int i = s.length() - 1; i >= 0; i--) {
            rev += s[i];
        }

        // Palindrome check
        if (s == rev) {
            cout << "It is a Palindrome." << endl;
        } else {
            cout << "It is NOT a Palindrome." << endl;
        }

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








/* find whether the given string is palindrome or not*/
