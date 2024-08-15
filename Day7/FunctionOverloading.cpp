#include<iostream>
using namespace std;

void add(int a, int b){
    int c = a+b;
    cout<<c<<endl;
}

void add(double a, double b){
    double c = a+b;
    cout<<c<<endl;
}

int main(){
    add(10, 20);
    add(30.0, 40.0);
    return 0;
}