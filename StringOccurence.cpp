#include <iostream>
#include <string>
using namespace std;

int main() {
    char choice;

    do {
        string str;
        char ch;
        int count = 0;

        cout << "Enter a string: ";
        getline(cin, str);

        cout << "Enter a character to find: ";
        cin >> ch;

        // Count occurrence
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ch) {
                count++;
            }
        }

        cout << "Occurrence of '" << ch << "' in string is: " << count << endl;

        cout << "\nDo you want to continue (Y/N): ";
        cin >> choice;

        // One-time invalid check
        if (choice != 'Y' && choice != 'y' &&
            choice != 'N' && choice != 'n') {
            cout << "Invalid entry!" << endl;
            break;
        }

        cin.ignore(1000, '\n');  // clear buffer before next getline

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended." << endl;
    return 0;
}
/* count the occurrence of a character in a string and ask user whether to continue or not*/
