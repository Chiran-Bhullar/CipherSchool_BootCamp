// Array 4 

#include<iostream>
using namespace std;


bool linearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(key==arr[i]){
            cout<<"Element found at : "<<i<<endl;
        }
    }
    return true;
}

int main(){
    int arr[4] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    
    linearSearch(arr, n, key);
    
    return 0;
    
}