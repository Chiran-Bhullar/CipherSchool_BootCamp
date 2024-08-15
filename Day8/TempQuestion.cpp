//Templates

#include<iostream>
using namespace std;

template<class T>
class Number{
    
    public:
    
    T a, b, c;

    
    T add(){
        a = 20;
        b = 30;
        
        c = a+b;
        
        return c;
    }
    T subtract(){
        a = 20;
        b = 30;
        
        c = a-b;
        
        return c;
    }
    
};

int main(){
    Number<int> n1;
    
    cout<<"Add of two numbers is : "<< n1.add() << endl;
    
    cout<<"Subtract of two numbers is : "<< n1.subtract() << endl;
}