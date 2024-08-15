#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    
    vector<int> array = {1, 1, 2, 2, 2, 3, 3}; 

    
    set<int> setFromArray(array.begin(), array.end());
    
    
    
    int count = 0;
    for (int element : setFromArray) {
        count++;
        cout << element << " ";
    }
    cout<<endl;
    
    cout<<"Total Unique value is: " << count;
    return 0;
}