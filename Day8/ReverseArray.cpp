// Array 5 Reverse Array

#include<iostream>
using namespace std;

// int main(){
    
//     int arr[3] = {1,2,3};
    
//     for(int i = 0; i < 3; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
     
//     cout<<"Now Reversing : " << endl;
    
//     for (int i = 2; i >= 0; i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

void reverseArr(int arr[], int n){
    int start = 0;
    int end = n-1;
    
    while(start <= end){
        swap(arr[start], arr[end]);
        
        start++;
        end--;
    }
}
int main(){
    int arr[5]= { 1,2,3,4,5 };
    
    reverseArr(arr, 5);
    
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}