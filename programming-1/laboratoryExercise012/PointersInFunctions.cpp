#include <iostream> // enables cout

// declare std to use cout, and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "_______________________________________________________________________";

// function that returns a string
string Question3(){
  return "This is it!";
}

// function that uses a pointer to change a value
void Question1(int &num){
  int *pNum = &num;
  *pNum = 27946;
}

int main(){
  // -----------------------------   Question 1   ----------------------------------------------
  cout << lineBreak << endl << endl;
  int num = 654321; // initial value

  // labels
  cout << "Question 1" << " ( num" << " = " << num << " )" << endl << endl;

  // previous value
  cout << "Previous Value of num: " << num << endl << endl;

  // change the value
  Question1(num);

  // current value
  cout << "Current Value of num: " << num << endl << endl;

  // -----------------------------   Question 2   ----------------------------------------------
  cout << lineBreak << endl << endl;
  cout << "Question 2" << endl << endl; // labels

  // empty floatNumber | shared variable
  float floatNumber, sharedDetails = 55.5;
  
  // pointer of the floatNumber | address of the floatNumber
  float *pFloatNumber = &floatNumber;

  *pFloatNumber = sharedDetails; // get the value of sharedDetails 
  pFloatNumber = &sharedDetails; // get the address of sharedDetails

  // floatNumber value and address
  cout << "floatNumber Value: " << floatNumber << endl;
  cout << "floatNumber Address: " << pFloatNumber << endl << endl;

  // sharedDetails value and address
  cout << "sharedDetails Value: " << sharedDetails << endl;
  cout << "sharedDetails Address: " << &sharedDetails << endl << endl;
  
  // -----------------------------   Question 3   ----------------------------------------------
  cout << lineBreak << endl << endl;
  cout << "Question 3" << endl << endl; // labels
  
  // Question3() returns a string
  string strangeVariable = Question3();

  // show the strangeVariable value
  cout << strangeVariable << endl << endl;

  // -------------------------------------------------------------------------------------------

  return 0;
}