#include<iostream>
using namespace std;
void printAnArry(int arr[],int size){
    for(int index =0;index<size-1;index++){
        cout<<arr[index]<<endl;
    }
}
int main(){
    int arry[]={2,3,4,7,8,9};
    int size = 6;
    printAnArry(arry,size);
    return 0;
}