#include "matrixHeader.h"
#include<iostream>
using namespace std;

Matrix::Matrix(){//Constructor for matrix
  for(int x = 0; x < 3; x++){
      for(int y = 0; y < 3; y++){
        myArray[x][y] = rand()%10; //Assign random int (set to a range between 0-9 for simplicity)
      }
    }
}

void Matrix::toString(){//Method for printing a Matrix
  for(int x = 0; x < 3; x++){
    for(int y = 0; y < 3; y++){
      cout<<myArray[x][y]<<" ";
    }
    cout<<"\n";
  }
  return;
}

Matrix Matrix::operator * (const Matrix &b){//Matrix multiplication operator
  Matrix newMatrix;
  for(int x = 0; x < 3; x++){
    for(int y = 0; y < 3; y++){
      int sum = 0;
      for(int z = 0; z < 3; z++){
        sum += myArray[x][z] * b.myArray[z][y];
      }
      newMatrix.myArray[x][y] = sum;
    }
  }
  return newMatrix;
}

bool Matrix::operator == (const Matrix &c){//operator for checking if 2 matrixes are the same
  int flag = 0;
  for(int x = 0; x < 3; x++){
    for(int y = 0; y < 3; y++){
      if(this->myArray[x][y] != c.myArray[x][y]){
        flag++;
      }
    }
  }
  if(flag == 0){
    return true;
  }else{
    return false;
  }
}
