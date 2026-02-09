#include<iostream>
using namespace std;
int main(){
    string str ="dare devil";
    char ch='d';
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            count++;
        }

    }
    cout<<"occurance in string is:"<<count;
    return 0;

}
