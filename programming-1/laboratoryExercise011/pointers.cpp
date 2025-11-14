#include <iostream> // enables cout

// declare std to use cout and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "_________________________________________________________________";

int main() {
  // -----------------------------   Question 1   ----------------------------------------------
  int num = 900; // value
  int *pNum = &num; // pointer (& = address, * = value)

  // show the output
  cout << lineBreak << endl << endl;
  cout << "Question 1 " << "( num" << " = " << num << " )" << endl << endl;

  cout << "Value: " << *pNum << endl;
  cout << "Address: " << pNum << endl << endl;
  
  // -----------------------------   Question 2   ----------------------------------------------
  char array[10]; // size 10 array
  char *pArray = array; // pointer (array itself has the address)

  // show the output
  cout << lineBreak << endl << endl;
  cout << "Question 2 " << "( array[10] )" << endl << endl;

  cout << "Value: " << (int)*pArray << endl;
  cout << "Address: " << (string*)pArray << endl << endl;

  // -----------------------------   Question 3   ----------------------------------------------
  float largeArray[20]; // size 20 array
  float *pLargeArray = largeArray; // pointer (array itself already has the address)

  // show the output
  cout << lineBreak << endl << endl;
  cout << "Question 3 " << "( array[20] )" << endl << endl;

  cout << "Value: " << (int)*pLargeArray << endl;
  cout << "Address: " << (string*)pLargeArray << endl << endl;
  
  // -------------------------------------------------------------------------------------------

  return 0;
}