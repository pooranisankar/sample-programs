#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    } 
    if(count==2)
        cout<<"It is a prime number";
    
    else
        cout<<"It is a composite number";
    
   
     
}            




/* find whether the given number is prime or composite*/