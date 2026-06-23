#include<iostream>
using namespace std;
int main(){
    int *ptr= new int[5];
    ptr[0]=3;
    ptr[1]=10;
    ptr[2]=20;
    ptr[3]=30;
    ptr[4]=49;


   
    for(int  i=1;i<5;i++){
        cout<<ptr[i];
    }  

    return 0;
} 