// Runtime Polymorphism / Late Binding

// Virtual Function is a member function in the base class that you redefine in the derieved class.


// A Virtual Function must be defined in the Base class, even though it is not used.
// Virtual Function must be member of some class.
// They are accessed through object pointers.
// 



#include<iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout<<"From Base " << endl;
    }
    
};

class Derieved : public Base{
   public:
    void display(){
        cout<<"From Derieved " << endl;
    }
    
} ;

int main(){
    Derieved d1;
    
    Base *ptr = &d1;

    ptr -> display();
}