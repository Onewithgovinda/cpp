#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum =0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int max(int arr[],int size){
    int max=arr[0];
    for(int i =0;i<size;i++){
        if(arr[i]<max){
            max=arr[i];
        }
    }    
    return max;
}
int main(){
    int num[5] = {1, 2, 3, 4, 5};
    int start = 0; int end = 4;
    while(start<end){
        swap(num[start],num[end]);
        start++;
        end--;
    }
    cout<<"Reversed array: ";
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    }
   int nums[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
   int nums1[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, };
   int nums2[]= {1, 2, 3, 4, 5, 6, 7, 8, 9};

   for(int i=0;i<9;i++){
      bool found = false;
       for(int j=0;j<9;j++){
           if(nums1[i]==nums2[j]){
               
               found = true;
           }
       }
       if(!found){
           cout<<nums1[i]<<" ";
       }
   }

   for(int i=0;i<9;i++){
       bool isTemp = true;
        for(int j=0;j<9;j++){
         if(i!=j && nums[i]==nums[j]){
            isTemp = false;
            break;
          } 
        }
        if(isTemp){
            cout<<nums[i]<<" ";
        }
    }



   
    
    return 0;
}



