#include <iostream>
using namespace std;
int printCounting(int n){
    for(int i =0;i<=n;i++){
        cout<<i<<endl;
    }
    return 0;
}

float simpleintrest(float p,float r,float t){
    return (p*r*t)/100;
}
int printPrimeNumbers(int n){
    for(int i =2;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<endl;
        }
    }
    return 0;
}
int age(int age){
    if(age>=18){
        cout<<"You are eligible to vote"<<endl;
    }
    else{
        cout<<"You are not eligible to vote"<<endl;
    }
    return 0;
}
int main() {
    int ans = printCounting(10);
    cout<<ans<<endl;
    float si = simpleintrest(1000, 5, 2);
    cout<<si<<endl;
    int primeAns = printPrimeNumbers(20);
    cout<<primeAns<<endl;
    int ageAns = age(25);
    cout<<ageAns<<endl;
    return 0;
}
