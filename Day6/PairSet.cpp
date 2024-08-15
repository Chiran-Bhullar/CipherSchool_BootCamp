// Pair Set 

#include<iostream>
using namespace std;

string pairSum(int arr[], int size, int target){
    sort(arr[0], arr[size]);
    int i = 0;
    int j = size - 1;
    while(i <= j){
        int suml
        sum = arr[i] + arr[j];
        if(sum == target) return "Yes";
        else if (sum < target) i++;
        else j--;
    }
    return "No";
}

int main(){
    

}