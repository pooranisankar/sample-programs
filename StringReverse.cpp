#include <iostream>
#include <string>
using namespace std;

int main() {
    char choice;

    do {
        string s, rev = "";

        cout << "Enter a string: ";
        getline(cin, s);

        for (int i = s.length() - 1; i >= 0; i--) {
            rev += s[i];
        }

        cout << "Reversed string is: " << rev << endl;

        cout << "Do you want to continue (Y/N): ";
        cin >> choice;

        if (choice != 'Y' && choice != 'y' &&
            choice != 'N' && choice != 'n') {
            cout << "Invalid entry!" << endl;
            break;  
        }

        cin.ignore(1000, '\n');  

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended." << endl;
    return 0;
}
/* reverse a string and ask user whether to continue or not*/
