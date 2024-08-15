//Inheritance

// It allows us to create new class(derived class / child class) from an existing class (Base Class/ Parent class)

// The child class inherits the features from the parent class and can also have additional features of its own.


// Only public methods of parent class can be accessed by the child class. Private method not.

#include<iostream>
using namespace std;

class Animal{
    public:
    
    void eat(){
        cout<<"Eating..."<<endl;
    }
    
    private:
    
    void animalPrivate(){
        cout<<"Private Method only accessed by parent class."<<endl;
    }
    
    protected:
    
    void animalProtected(){
        cout<<"Protected Method only accessed in child class."<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"Dog is barking..."<<endl;
    }
    
    void printProtected(){
        animalProtected();
    }
};

int main(){
    
    Dog d1;
    d1.eat();
    d1.bark();
    d1.printProtected();
    
    Animal a1;
    // a1.animalPrivate();
    
    return 0;
}