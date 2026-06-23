#include <iostream>
using namespace std;
void input2DArray(int arry[][4],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cout<<"enter the element"<<i<<" "<<j<<" : ";
            cin>>arry[i][j];
        }
    }
}
void print2DArray(int array[][4],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arry[3][4];
    int rows = 3;
    int cols = 4;
    input2DArray(arry,rows,cols);
    print2DArray(arry,rows,cols);
    return 0;

}