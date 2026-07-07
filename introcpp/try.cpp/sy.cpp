#include<iostream>
using namespace std;
int main(){
    int num[5] = {1, 2, 3, 4, 5};
    int start = 0; int end = 4;
    while(start<end){
        swap(num[start],num[end]);
        start++;
        end--;
    }
    cout<<"Reversed array: ";
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    }

    return 0;
}