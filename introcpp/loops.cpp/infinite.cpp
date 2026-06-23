#include <iostream>
using namespace std;
int main() {
    int i=1;
    for(;;){
        cout<<i<<endl;
        i++;
        if(i==11){
            break;
        }
    }
    return 0;
}