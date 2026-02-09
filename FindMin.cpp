#include<iostream>
using namespace std;
int main(){
    int a[6]={9,5,7,3,8,2};
    int min=a[0];
    for(int i=1;i<6;i++){
        if(a[i]<min){
             min=a[i];
        }
    }
    cout<<"minimum number is:"<<min;
    return 0;


}



/* find the minimum number in an array*/
