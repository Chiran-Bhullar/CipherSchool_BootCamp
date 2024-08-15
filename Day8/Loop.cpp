#include<iostream>
using namespace std;

int main(){
    
    int sub1, sub2, sub3;
    double percentage = 0;
    
    cout<<"Enter the marks of Physics: "<<endl;
    cin>>sub1;
    cout<<"Enter the marks of Chemistry: "<<endl;
    cin>>sub2;
    cout<<"Enter the marks of Mathematics : "<<endl;
    cin>>sub3;
    
    percentage = ((sub1 + sub2 + sub3)/300.0)*100;
    
    if(percentage > 60){
        cout<<"Result"<<endl;
        cout<<"Physics : "<<sub1<<endl;
        cout<<"Chemistry : "<<sub2<<endl;
        cout<<"Mathematics : "<<sub3<<endl;
        
        cout<<"Total Percentage : "<<percentage<<endl;
        
        cout<<"Final Result : Pass"<<endl;
    }
    
     else{
        cout<<"Result"<<endl;
        cout<<"Physics : "<<sub1<<endl;
        cout<<"Chemistry : "<<sub2<<endl;
        cout<<"Mathematics : "<<sub3<<endl;
        
        cout<<"Total Percentage : "<<percentage<<endl;
        
        cout<<"Final Result : Fail"<<endl;
        
        cout<<"Better Luck! Next Time."<<endl;
    }
    return 0;
}