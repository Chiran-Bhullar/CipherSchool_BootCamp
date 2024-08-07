#include <iostream>
#include <cmath>
using namespace std;

double getSquareRoot(double num) {
    return sqrt(num);
}

double getSquare(double num) {
    return num * num;
}

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    double squareRoot = getSquareRoot(number);
    double square = getSquare(number);

    cout << "The square root of " << number << " is: " << squareRoot << endl;
    cout << "The square of " << number << " is: " << square << endl;

    return 0;
}
