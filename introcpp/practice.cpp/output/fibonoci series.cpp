#include<iostream>
using namespace std;
int main(){
    int a =0,b=1;
    int n;
   for(int i =1;i<=10;i++){
    n = b+a;
    a=b;
    b=n;
    cout<<n<<" ";

   }
   return 0;
}