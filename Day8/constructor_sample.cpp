#include<iostream>
using namespace std;

// Constructor : 
// Constructor method is a special member function that is called automatically when an object is created.
// Constructor has same name as that of class.
// It does not have any return type.

class Employee{
    public: 
    
    //Default Constructor.
    Employee(){
        cout << " From Constructor" << endl;
    }
};

int main(){
    Employee e1;
}