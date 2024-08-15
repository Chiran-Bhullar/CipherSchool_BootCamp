// // Friend Functions 

// #include<iostream>
// using namespace std;

// class Distance{
//     private: 
//     int meter;
    
//     friend int increaseDistance(Distance);
      
//     public:
//     Distance(){
//         meter = 0;
//     }
// };

// int increaseDistance(Distance d){
//     d.meter += 10;
//     return d.meter;
// }

// int main(){
    
//     Distance d1;
    
//     cout<<"Distance is : "<< increaseDistance(d1)<<endl;
// }



//-------------------------------------------------------------------------------------------------------

// Friend Classes

#include<iostream>
using namespace std;

class A{
  private:
  int numA;
  
  friend class B;
  
  public:
  A(){
      numA = 5;
  }
};

class B{
  private: 
  int numB;
  
  public: 
  B(){
      numB = 10;
  }
  
  int add(){
      A a1;
      a1.numA;
      
      return a1.numA + numB;
  }
};

int main(){
    B b1;
    cout<<b1.add();
}
