#include "matrixHeader.h"
#include<iostream>
using namespace std;

int main(){
  cout<<"Array 1:"<<endl;
  Matrix myObj1;
  myObj1.toString();
  cout<<"Array 2:"<<endl;
  Matrix myObj2;
  myObj2.toString();
  if(myObj1 == myObj2){
    cout<<"The arrays are the same"<<endl;
  }else{
    cout<<"The arrays are not the same"<<endl;
  }
  Matrix myObj3 = myObj1*myObj2;
  myObj3.toString();
  return 0;
}
