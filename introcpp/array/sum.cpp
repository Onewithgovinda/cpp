#include <iostream>
using namespace std;
int main(){
    int arr[10];
    int sum = 0;
    cout<<"Enter 10 numbers : ";
    for(int i =0 ; i<10 ; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"The sum of the array is : "<<sum<<endl;
    return 0;
}