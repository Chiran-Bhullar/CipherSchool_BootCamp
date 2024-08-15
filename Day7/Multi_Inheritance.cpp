// Types of Inheritance

#include<iostream>
using namespace std;

// //Multilevel

// class A{
    
// };

// class B : public A{
    
// };

// class C : public B{
    
// };


//------------------------------------------------------------------------------------


//Multiple

// class A{
//     public:
//     void print(){
//         cout<<"Class A Print Function"<<endl;
//     }
// };

// class B{
//     public:
//     void print(){
//         cout<<"Class B Print Function"<<endl;
//     }
// };

// class C : public A, public B{
    
// };

// If same name function called in inherited class in Multiple Inheritance it causes Ambiguity.
//In multiple Inheritance inherited class can access same name function of different classes be using scope resolution operator.
//Scope resolution operator is declarred as " :: ".
// int main(){
//     C c1;
//     c1.A::print();
//     c1.B::print();
// }

//--------------------------------------------------------------------------------------------------------------


// Hierarchical

class A{
    
};

class B : public class A{
    
};

class C : public Class A{
    
};

