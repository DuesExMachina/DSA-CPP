/*
Program to demostrate operator overloading in cpp
*/
#include <iostream>

using namespace std;
class ComplexNo{
    public:
  int real;
  int img;
  
  ComplexNo operator+(ComplexNo &a){
      ComplexNo obj;
      obj.real=real+a.real;
      obj.img=img+a.img;
      return obj;
  }
};

int main()
{
    ComplexNo a(2,3); //using default contructor to set value and create object
    ComplexNo b(3,2);
    ComplexNo c=a+b;  //using overloade + operator to add two object of ComplexNo class
    cout<<c.real;

    return 0;
}
