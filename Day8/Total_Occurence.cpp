// Total Occurence

#include<stdio.h>
int binary(int arr[],int size,int key,int low,int high){
    int mid=(low+(high-low)/2); // so that it doesnot go out of bound of the integer range
    int answer;
    if(arr[mid]==key){
          answer = mid;
        high=mid-1;
        
    }
    else if(arr[mid]<key){
        return binary(arr,size,key,mid+1,high);
    }
    else {
        return binary(arr,size,key,low,high);
    }

return answer;
    
}

int binary1(int arr[],int size,int key,int low,int high){
    int mid=(low+(high-low)/2);
    int answer1;
    while(low<=high){
    if(arr[mid]==key){
          answer1 = mid;
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
return answer1;
    

}
int total(int answer,int answer1){
    return (answer-answer1)+1;
}

int main(){
    int arr[]={1,2,2,3,3,3};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key=2;
    int high=5;
    int low=0;
    int answer=binary(arr,size,key,low,high);
    int answer1=binary1(arr,size,key,low,high);
    printf("total occurence is %d\n",total(answer,answer1));


    return 0;
}