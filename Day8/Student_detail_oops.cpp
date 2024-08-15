#include<iostream>
using namespace std;

class Student{
    
    public:
    
    string name;
    int rollNumber;
    int age;
    
    void printDetail(){
        cout<<"Student name is : " << name << endl;
        cout<<"Student age is : " << age << endl;
        cout<<"Student rollNumber is : " << rollNumber << endl;
    }
    
};

int main(){
    
    string name;
    int rollNumber;
    int age;
    
    cout << " Enter name: " << endl;
    cin >> name;
    cout << " Enter age: " << endl;
    cin >> age;
    cout << " Enter rollNumber: " << endl;
    cin >> rollNumber;
    
    Student s1;
    s1.name = name;
    s1.age = age;
    s1.rollNumber = rollNumber;
    s1.printDetail();
    
    return 0;
}