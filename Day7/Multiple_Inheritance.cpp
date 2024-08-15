#include<iostream>
using namespace std;

class Base{
  public : 
  int x;
  
  protected:
  int y;
  
  private:
  int z;
  
};

class class1:public Base{
    //x is public
    //y is protected
    //z is not accessible
};
class class2 : protected Base{
    //x will become protected 
    //y is protected 
    //z is not accessible
};

class class3 : private Base{
    //x will become private
    //y will become private
    //z is not accessible
};