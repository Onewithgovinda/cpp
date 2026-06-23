#include<iostream>
using namespace std;
void evennumber(int arr[],int size,int count){
    for(int i =0;i<size;i++){
        if(arr[i]%2==0){
            count ++;
        }
        
    }
    
}

int main(){
    int arr[]= {1,2,3,4,5};
    int size = 5;
    int count =0;
    evennumber(arr,size,count);
    
    cout<<count;
    return 0;
}    