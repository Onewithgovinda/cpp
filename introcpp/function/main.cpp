#include <iostream>
using namespace std;
 
void getMultiplication(int a,int b,int c){
    cout<<a*b*c<<endl;
}
void printNametenTimes(){
    for(int i =1;i<=10;i++){
        cout<<"hello govinda"<<endl;
    }
}

int sum(int a,int b){

    return a+b;
}

int main() {
   sum(4,5);
  getMultiplication(2,3,4);
   //cout<<sum(4,5)<<endl;
   //cout<<getMultiplication(2,3,4)<<endl;
   //printNametenTimes();
  
    return 0;
}