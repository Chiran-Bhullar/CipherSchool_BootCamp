// First Occurence

#include<stdio.h>
int binary(int arr[],int size,int key,int low,int high){
    int mid=(low+(high-low)/2);
    int answer;
    while(low<=high){
    if(arr[mid]==key){
          answer = mid;
        high=mid-1;
        
    }
    else if(arr[mid]<key){
        low=mid+1;
    }
    else {
        high=mid-1;
    }
    mid=low+(high-low)/2;
    }
return answer;
    

}
int main(){
    int arr[]={1,2,2,3,3,3};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key=2;
    int high=5;
    int low=0;
    printf("%d\n",binary(arr,size,key,low,high));

    return 0;
}