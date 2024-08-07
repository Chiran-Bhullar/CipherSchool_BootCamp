#include<iostream>
using namespace std;

int main(){
    
    int n1, n2, n3;
    
    cout << "Enter the first number: " << endl;
    cin >> n1;
    
    cout << "Enter the second number: " << endl;
    cin >> n2;
    
    cout << "Enter the third number: " << endl;
    cin >> n3;
    
    if( n1 > n2 && n1 > n3 ){
            cout << " First Number is Greater." << endl;
    }
    else if( n2 > n1 && n2 > n3){
            cout << " Second Number is Greater." << endl;
    }
    else{
        cout << "Third Number is Greater." << endl;
    }
    
    return 0;
    
}