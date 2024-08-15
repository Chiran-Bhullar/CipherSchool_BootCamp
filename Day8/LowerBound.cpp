// Lower Bound

// -> Given a sorted array of N integers and an in integer x, find the lower bound of x.
// -> Lower Bound algo finds the first or the smallest index in a sorted array, Where the value at that given index is greater than or equal to a given key i.
// -> e -> x.


// in the lower bound algo finds the first or smallest index in a sorted array
//  wwhere the value at that given index is greater than or equal to given key i;

#include<iostream>
using namespace std;

int binary(int arr[],int size,int key,int low,int high){
    int mid=(low+(high-low)/2);
    int answer;
    if(arr[mid]==key){
       return mid;
        
    }
    else if(arr[mid]<key){
        for(int i=mid+1;i<high;i++){
            if(arr[i]>=key)
            return i;
        }
    }
    else if(arr[mid]>key){
        for(int i=low;i<mid-1;i++){
            if(arr[i]>=key)
            return i;
        }
    }

return answer;
    
}

int main(){
    int arr[]={3,5,7,8,15};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key=10;
    int high=5;
    int low=0;
    cout<<binary(arr,size,key,low,high);

    return 0;
}