#include <iostream>
using namespace std;    


void operation(int a,int b,char ops){
    switch(ops){
        case '+': 
        cout<<"Addition is : "<<a+b<<endl;
        break;
        case '-':
        cout<<"sub : "<<a-b<<endl;
        break;
        case '*':
        cout<<"mul : "<<a*b<<endl;
        break;
        case '/':
        if(b!= 0){
            cout<<"div :" <<a/b<<endl;
        }
        else{
           cout<<"error this ops is not possible bcz of the of the denominator being zero"<<endl;
        }
        break;
        default:
        cout<<"Invalid operation selection. Choose 1-4."<<endl;
    }
}
int main(){
    int a,b;
    char ops;
    cout<<"Enter your first no : "<<endl;
    cin>>a;
    cout<<"Enter your secocnd no : "<<endl;
    cin>>b;
    cout<<"Enter your opration : "<<endl;
    cin>>ops;
    operation(a,b,ops);

    return 0;
}