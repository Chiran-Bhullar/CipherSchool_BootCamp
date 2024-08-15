// // Binary Search

// Steps : 

// 1. There is an array.
// 2. Sort the Array in Ascending Order
// 3. Now, find the middle element in the array, using formula ((Start Element + End Element) / 2).
// 4. Check the our target element is equals to middle element. If yes, then we find the answer. If not,
// 5. Then we compare the target with middle. We check the target is greater than or smaller than middle.
// 6. If it is greater than we compare the right part of the array from middle. If less then we compare left part of the array. 
// 7. So, here we get small array. 
// 8. We again apply the same operations till we find target.

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    
    if(arr[mid] == key){
        return mid;
    }
    
    while(start <= end){
        if(key>arr[mid]){
            // go to right part of array.
            start = mid + 1;
        }
        else{
            //g to left of part of array.
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    int arr[10] = {1, 9, 2, 8, 3, 7, 4, 6, 5, 0};
    binarySearch(arr, 10, 9);
}