// Heap

/* 

Heap -> HEap is a complete Binary Trr that comes with a heap order property.

CBT -> Every Levelis completely filled except the last level, here nodes are always added from left.

For Inserting - >
   : Insert at the end.
   : take to the correct position.
   
For Deletion - >
    : Replace with last with root.
    : Remove last
    : Place root at its correct position.

*/

#include<iostream>
using namespace std;

class Heap{
    public:
    int size;
    int arr[50];
    
    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;
    
        while(index>1){
            int parent = index/2;
        
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    
    void deleteHeap(){
        if(size == 0){
            return;
        }
        
        // replace the first node with last
        arr[1] = arr[size];
        
        // Remove the lasy element
        size --;
        
        // take a root to the coorevt position.
        int i = 1;
        while(i < size){
            int leftIndex = 2 * i;
            int righIndex = 2 * i + 1;
            
            if(leftIndex < size && arr[i]<arr[rightIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i]<arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
        }
    }
    void print(){
        for(int i = 1; i <= size; i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};



int main(){
    Heap h;
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(5);
    h.insert(12);
    h.insert(7);
    h.insert(10);
    
    h.print();
    
    h.deleteHeap();
    
    h.print();
    
    void heapify(int arr[], int n, int i){
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;
        
        if(left < n && arr[largest] = arr[left]){
            largest = left;
        }
        if(right<n && arr[largest] < arr[right]){
            largest = right;
        }
        
        if(largest != i){
            swap(arr[largest])
        }
    }
}