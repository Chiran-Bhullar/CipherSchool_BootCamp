#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;

    int *p1, *p2, *p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    *p1 = 10;
    *p2 = 20;
    *p3 = 30;

    int sum = *p1 + *p2 + *p3;

    cout << "Value of a: " << *p1 << endl;
    cout << "Value of b: " << *p2 << endl;
    cout << "Value of c: " << *p3 << endl;
    cout << "Sum of a, b, and c: " << sum << endl;

    return 0;
}
