#include<iostream>
using namespace std;
int main(){
    int n , fact;
    cout<<"enter the number of terms: ";
    cin>>n;

   fact = 1;
    for(int i = 1; i <= n; i++){
        cout<<fact<<"*"<<i<<"=";
        fact = fact * i;
        cout<<fact<<endl;
        
        
        
    }
    cout<<fact<<endl;
    return 0;

}