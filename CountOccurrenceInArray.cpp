#include<iostream>
using namespace std;
int main(){
    int a[10]={3,6,8,9,2,7,2,5,2,2};
    int count=0;
    for(int i=0;i<10;i++){
        if(a[i]==2){
            count++;
        }
    }
    cout<<"occurance of 2 is:"<<count;
    return 0;
}
