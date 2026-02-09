#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,reverse="";
    cout<<"enter a string:";
    getline(cin,s);
    for(int i=s.length()-1;i>=0;i--){
        reverse=reverse+s[i];
    }
    if(s==reverse){
        cout<<"it is a palindrome";
    }
    else{
        cout<<"its is not a palindrome"; 
    }

}








/* find whether the given string is palindrome or not*/
