#include<iostream>
using namespace std;
int main(){
    int a[6]={9,5,7,3,8,2};
    int max=a[0];
    for(int i=1;i<6;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"maximum  number is:"<<max;
    return 0;


}



/* find the maximum number in an array*/
