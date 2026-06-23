#include <iostream>
using namespace std;
void printTable(int num[],int size){
    int count=1;
    for(int i =0;i<=9;i++){
        num[i]=10*count;
        count++;
    }
}
void printAnArry(int arr[],int size){
    for(int index =0;index<size-1;index++){
        cout<<arr[index]<<endl;
    }
}
int main(){
    int num[10];
    int size = 10;
    //printAnArry(num,size);
    printTable(num,size);
    printAnArry(num,size);
    return 0;
}