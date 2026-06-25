#include<iostream>
using namespace std;    
int main(){
    int a;
    cin>>a;
    bool isPrime = true;
    for(int i =2;i<(a-1);i++){
        if(a%2==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<"prime no"<<endl;

    }else{
        cout<<"not a prime no"<<endl;
    }
}