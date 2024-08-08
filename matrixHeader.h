#ifndef MATRIXHEADER_H
#define MATRIXHEADER_H

#include<iostream>
using namespace std;

//variables and methods of Matrix
class Matrix{
public:
  int myArray[3][3];

  Matrix();

  void toString();

  Matrix operator * (const Matrix&b);

  bool operator == (const Matrix&c);
};

#endif
