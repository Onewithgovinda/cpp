#include <iostream>
using namespace std;
int main(){
    // cout<<"enter a char"<<endl;
    // char c ;
    // cin >>c;
    // if(c>=97&&c<=122){
    //     cout<<"lowercase"<<endl;
    // }else if (c>=65&&c<=90){
    //     cout<<"uppercase"<<endl;
    // }else{
    //     cout<<"not a alphabet"<<endl;}

    // int i =1;
    // while(i<=10){
    //     cout<<i;
    

    // }


    int sum = 0;
    for(int i = 1;i<=10;i++){
        if(i%2!=0){
            cout<<i<<" is odd no"<<endl;
            sum = sum +i;
        }
        
    }   
    cout<<"sum of first 10 natural no is :"<<sum<<endl;
}
