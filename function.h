#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <string>

//variables and methods of Address
class Address{
private:
  std::string streetName;
  int houseNumber;
  std::string apartmentNumber;
  std::string city;
  std::string state;
  std::string country;
public:
  Address(std::string sn, int hn, std::string an, std::string ct, std::string st, std::string cou);
  void adDisplay();
};

//variables and methods of Student
class Student{
private:
  std::string studentID;
  Address address;
public:
  std::string name;
  std::string email;

  Student(std::string id);
  void addAddress(std::string sn, int hn, std::string an, std::string ct, std::string st, std::string cou);
  void display();
};

#endif
