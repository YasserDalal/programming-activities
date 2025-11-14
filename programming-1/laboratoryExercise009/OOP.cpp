#include "Classes.h" // import the all the classes inside "Classes.h"
#include <iostream> // enables cout

// declare std to use cout and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "________________________________________________________________";

/*
  Write a class that will represent a LeggedMammal. 
  Consider the number of legs, kind of fur, presence of tail.
*/
void question1(){
  // pass arguments to the constructor
  LeggedMammal Zebra(4, "Black and White stripes fur", "Has a short tail");
  
  // show the output
  cout << lineBreak << endl << endl;
  cout << "Class 1: LeggedMammal" << endl << endl;

  cout << "Zebra's number of legs: " << Zebra.mLegs << endl;
  cout << "Zebra's Fur: " << Zebra.mFur << endl;
  cout << "Zebra's Tail: " << Zebra.mTail << endl << endl;
}

/*
  Write a class that will represent a Person. 
  Consider the name, address, gender, age and occupation.
*/
void question2(){
  // pass arguments to the constructor
  Person LonelyGuy("Yasser Dalal", "Manama City", "Male", 21, "Student");
  
  // show the output
  cout << lineBreak << endl << endl;
  cout << "Class 2: Person" << endl << endl;

  cout << "Person's name: " << LonelyGuy.mName << endl;
  cout << "Person's address: " << LonelyGuy.mAddress << endl;
  cout << "Person's gender: " << LonelyGuy.mGender << endl;
  cout << "Person's age: " << LonelyGuy.mAge << endl;
  cout << "Person's occupation: " << LonelyGuy.mOccupation << endl << endl;
}

/*
  Write a class that will represent Polygon. 
  Consider the name, number of sides and color.
*/
void question3(){
  // pass arguments to the constructor
  Polygon Triangle("Triangle", 3, "Blue");
  
  // show the output
  cout << lineBreak << endl << endl;
  cout << "Class 3: Polygon" << endl << endl;

  cout << "Polygon's name: " << Triangle.mName << endl;
  cout << "Polygon's number of sides: " << Triangle.mSides << endl;
  cout << "Polygon's color: " << Triangle.mColor << endl << endl;
}

int main(){
  // run the outputs of the classes
  question1(); // Class 1
  question2(); // Class 2
  question3(); // Class 3

  return 0;
}