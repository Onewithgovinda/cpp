#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter a character : ";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        cout<<"the char are vowel"<<endl;
    }else{
        cout<<"the char are consonant"<<endl;
    }
    return 0;
}