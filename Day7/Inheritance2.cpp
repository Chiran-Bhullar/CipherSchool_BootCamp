// Inheritance

#include<iostream>
using namespace std;

class Base{
    public :
    void print(){
        cout<<" From Base Class " << endl;       
    }
};
class Derived : public Base{
    public:
    void print(){
        cout<<"From Derived Class" <<endl;
    }
};

int main(){
    Derived d1;
    d1.print(); // Because child also have same function like base. So they can print their own function.
    
    d1.Base::print(); // If we need to print Base. We can accessed it by Scope Resolution Operator " :: "
    
    Base *ptr = &d1;
    ptr->print(); // If we want to access pointer function we can access it only by using arrow Operator " -> ".
    
}