#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};
    cout<<v1[0]<<endl;
    vector<int> v2 (4, 0);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

    return 0;
}