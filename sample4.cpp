#include<iostream>
using namespace std;
int main(){
    int a[6]={9,5,7,3,8,2};
    int temp;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
        }
    }
    cout<<"sorted array is:";
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";    
    }
    return 0;
}




/* sort an array in ascending order*/