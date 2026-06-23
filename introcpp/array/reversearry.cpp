#include <iostream>
using namespace std;

void inputinRevese2DArray(int arr[][4], int rows, int cols) {
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<"Enter value ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
}

void printReverseArray(int arr[][4], int rows, int cols) {
    for(int i=rows-1;i>=0;i--) {
        for(int j=cols-1;j>=0;j--) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int arr[3][4];
    int rows = 3;
    int cols = 4;

    inputinRevese2DArray(arr, rows, cols);

    cout << "\nArray elements:\n";
    printReverseArray(arr, rows, cols);

    return 0;
}