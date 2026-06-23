#include <iostream>
using namespace std;
int main() {
   int num1=10;
   float num2=5.5;
    int result1=num1+num2; // Implicit typecasting
    float result2=num1+num2; // Implicit typecasting
    cout<<"Result 1: "<<result1<<endl;
    cout<<"Result 2: "<<result2<<endl;
    
    

    char ch='A';
    char result3=ch + 1; // Implicit typecasting
    cout<<"Result 3: "<<result3<<endl;
    //cout<<char(result3)<<endl; // Explicit typecasting
    char q = 67;
    cout<<q<<endl;
    return 0;
}