//Pointer

#include <iostream>
using namespace std;

int main()
{
    int x=5;
    int *ptr= &x; /*ptr will point and store the address of x, it will not store 5 
    but will store the address of 5 where it is stored int the memory */

    cout<< x << endl;

    cout << &x<<endl;

    cout << ptr<<endl;;//print the address of 5

    cout << *ptr;//dereferencing, it will print the value at this address

    cout << &ptr << endl; //address of the pointer\

    double y=10.0;
    double *p = &y;
    
    cout<< y<<endl;
    cout<< p << endl; //address of 10
    cout << *p<< endl; //value stored at address p
    cout << &p << endl; // address of p

    int vp = &y <<endl; / it can be pointed at any valur as it does not have any datatype 
    but if we want to know the value we have to type caste it*/



    return 0;
}