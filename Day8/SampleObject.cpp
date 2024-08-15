#include<iostream>
using namespace std;

// class Students{
//     string name;            // Data Members of class
//     int age;            // Data Members of class 
//     int rollNumber;         // Data Members of class
// };

// int main(){
    
// }


// When a class is defined, only the specification for the object is defined, no memory is allocated.

class Calculation{
    
    public:
    
    double length;
    double breadth;
    double height;
    
    double calculateArea(){
        return length * breadth;
    }
    
    double calculateVolume(){
        return length * breadth * height;
    }
};

int main(){
    
    
    Calculation c1;
    Calculation c2;
    
    c2.length = 10;
    c2.breadth = 9;
    c2.height = 9;
    
    cout<<c1.claculateArea() << endl;
    cout<<c2.claculateArea() << endl;

    return 0;
}