#include "function.h"

//Address constructor
Address::Address(std::string sn, int hn, std::string an, std::string ct, std::string st, std::string cou) : streetName(sn), houseNumber(hn), apartmentNumber(an), city(ct), state(st), country(cou) {}

//Method for displaying address object
 void Address::adDisplay(){
   std::cout<<"Address: "<< houseNumber <<" "<<streetName<<", apt "<<apartmentNumber<<
   " "<<city<<" "<<state<<" "<<country<<std::endl;
 }

//Setting the default parameters for student
 Student::Student(std::string id) : studentID(id), address("", 0, "", "", "", ""){}

//Method for adding address object to student object
 void Student::addAddress(std::string sn, int hn, std::string an, std::string ct, std::string st, std::string cou){
   address = Address(sn, hn, an, ct, st, cou);
 }

//Mehtod for displaying student object
 void Student::display(){
   std::cout<<name<<"has student id: "<<studentID<<", email: "<<email<<std::endl;
   address.adDisplay();
 }
