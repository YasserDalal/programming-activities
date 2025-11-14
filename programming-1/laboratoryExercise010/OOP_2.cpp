#include "ParentClasses.h" // import the all the classes inside "ParentClasses.h"
#include <iostream> // enables cout

// declare std to use cout and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "__________________________________________________";

int main() {
  cout << lineBreak << endl << endl; // line break

  // create an instance of child class
  Dog firstDog;

  // labels
  cout << "Child Class 1: Dog" << endl << endl;

  // setters from child class
  firstDog.setBreed("Golden Retriever");
  firstDog.setSize("Big");
  firstDog.setIsRegistered(true);

  // setters from parent class
  firstDog.setLegs(4);
  firstDog.setFur("Golden Fur");
  firstDog.setTail("Long Tail");

  // show the output and invoke the getters

  // getters from child class
  cout << "           Breed: " << firstDog.getBreed() << endl;
  cout << "            Size: " << firstDog.getSize() << endl;
  cout << "      Registered: " << firstDog.getIsRegistered() << endl << endl;
  // getters from parent class
  cout << "  Number of Legs: " << firstDog.getLegs() << endl;
  cout << "     Kind of Fur: " << firstDog.getFur() << endl;
  cout << "Presence of Tail: " << firstDog.getTail() << endl;

  cout << lineBreak << endl << endl; // line break

  // create an instance of child class
  Student student;
  
  // labels
  cout << "Child Class 2: Student" << endl << endl;

  // setters from child class
  student.setProgram("BSCPE");
  student.setYearLevel(1);
  student.setUniversity("AMA Online Education");

  // setters from parent class
  student.setName("Yasser Dalal");
  student.setAddress("Manama City");
  student.setGender("Male");
  student.setAge(21);
  student.setOccupation("Student");

  // show the output and invoke the getters

  // getters from child class
  cout << "         Program: " << student.getProgram() << endl;
  cout << "      Year/Level: " << student.getYearLevel() << endl;
  cout << "      University: " << student.getUniversity() << endl << endl;

  // getters from parent class
  cout << "            Name: " << student.getName() << endl;
  cout << "         Address: " << student.getAddress() << endl;
  cout << "          Gender: " << student.getGender() << endl;
  cout << "             Age: " << student.getAge() << endl;
  cout << "      Occupation: " << student.getOccupation() << endl;

  cout << endl;
  return 0;
}