//Polymorphism -> more than one form
// Poly -> Many, Morph -> Forms
// It means same entity (function or operator) behaves differently in different Scenarios.

#include<iostream>
using namespace std;


class Count{
    private :
    int value;
    
    public :
    Count(){
        value = 5;
    }
    
    void operator ++(){
        value += 10;
    }
    
    void display(){
        cout<<"Count is : "<< value<<endl;
    }
};
int main(){
    
    Count c1;
    c1.display();
    ++c1;
    
    c1.display();
    

}