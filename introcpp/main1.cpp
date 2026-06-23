#include<iostream>
using namespace std;
int main(){
   cout<<"Enter your no:"<<endl;
    int a ;
    cin>>a;
    if(a<=1){
        cout<<"a is not a  prime no"<<endl;
    }
    for(int i =2;i<(a-1);i++){
        if(a%i!=0){
            cout<<"prime no";
            break;
        }
        else{
            cout<<"not a prime no";
            break;
        }
    }
   return 0;
} 
