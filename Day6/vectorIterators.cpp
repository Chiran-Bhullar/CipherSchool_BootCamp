// STL - Standard Template Library
// It provides a set of programming tools to implement algorithm and data structures like vectors, list, queue, etc.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> num = {1,2,3,4};
    
    vector<int>::iterator itr;

    //print 
    
    for(int item : num){
        cout<<item<<" ";
    }
    
    //add 
    
    num.push_back(10);
    
    for(int item : num){
        cout<<item<<" ";
    }
    
    // Access
    
    cout<<"Element at 3 is : "<<num.at(4)<<endl;
    
    for(int item : num){
        cout<<item<<" ";
    }
    
    // Change
    
    num.at(0) = 60;
    for(int item : num){
        cout<<item<<" ";
    }
    
    //Delete
    
    num.pop_back(); // Delete the last element 
    
     for(int item : num){
        cout<<item<<" "<<endl;
    }




// Iterators -> They are used to point to the memory address of a vector element, they somehow act like pointers.

    itr = num.begin();
    
    cout<<*itr<<endl;
    
    for(itr = num.begin(); itr !=num.end(); itr++){
        cout<<*itr<<" ";
    }
    
     for(int item : num){
        cout<<item<<" ";
    
         
     }
}