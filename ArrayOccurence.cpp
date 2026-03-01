#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        int n,value;
        cout<<"enter size of array:";
        cin>>n;

        int a[n];
        cout<<"enter array elements:";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"enter the value to find occurrence:";
        cin>>value;

        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]==value){
                count++;
            }
        }

        cout << "Occurrence of " << value << " is: " << count << endl;

        cout << "\nDo you want to continue (Y/N): ";
        cin >> choice;
        
        if(choice =='N'|| choice == 'n'){
            cout<<"Program ended"<<endl;
        }
        else if(choice != 'Y' && choice !='y'){
            cout<<"Invalid entry!"<<endl;
        }
    } while (choice == 'Y' || choice == 'y');

 
    return 0;
}
/* count the occurrence of 2 in an array and ask user whether to continue or not*/
