#include<iostream>
using namespace std;

int main(){
    int x = 5;
    float y=10.5f;
    
    float *ptr2 = &y;
    
    int *ptr = &x;
    cout << &x << endl;
    
    int **ptr3 = &ptr;
    
    cout << ptr << endl;
    cout << &ptr << endl;
    
    cout << *ptr << endl;
    
    cout << *ptr2 << endl;
    cout << ptr3 << endl;
    cout << **ptr3 << endl;
    
}