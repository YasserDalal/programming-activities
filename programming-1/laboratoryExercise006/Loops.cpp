#include <iostream>// enables cout, cin

// declare std to use cout, cin, and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "____________________________________________________________________________________";

/*
  Write a program using WHILE statement that displays a right triangle using asterisks 
  where the height is at the left corner of the application. The height will depend on the user input.
*/
int question1(){
// accept input | loop variables
  int integer, i = 0, j;

  // labels
  cout << lineBreak << endl << endl;
  cout << "Question 1 (While loop)" << endl;
  cout << endl;

  // user input
  cout << "Enter a number: "; cin >> integer;
  cout << endl;

  // continue looping as long as i is less than integer
  // outer loop
  while(i < integer){
    // reset j to 0
    j = 0;
    // nested loop will complete its iterations first before moving to the next iteration of the outer loop
    while(j <= i){
      // concatenate stars
      cout << "*";
      // increment j to break the nested loop
      j++;
    }
    // move to the next row
    cout << endl;
    // increment i to break the loop if i is equal to integer
    i++;
  }

  return 0;
}

/*
  Write a program using FOR statement that displays a right triangle using asterisks 
  where the height is at the right corner of the application.The height will depend on the user input.
*/
int question2(){
  // accept input
  int integer;

  // labels
  cout << lineBreak << endl << endl;
  cout << "Question 2 (For loop)" << endl;
  cout << endl;

  // user input
  cout << "Enter a number: "; cin >> integer;
  cout << endl;

  // continue looping as long as i is less than integer
  // outer loop
  for(int i = 0; i < integer; i++){
    // nested loop will complete its iterations first before moving to the next iteration of the outer loop
    for(int j = 0; j <= i; j++){
      // continue concatenating stars until j is equal to i
      cout << "*";
    }
    // move to the next row
    cout << endl;
  }

  return 0;
}

/*
  Write a program using DO WHILE statement that displays an inverted equilateral triangle using asterisks. 
  No asterisk should be adjacent to one another. The height will depend on the user input.
*/
int question3(){
// accept input | loop variables
  int integer, i = 0, j;
  // spaces for rows
  string spaces;

  // labels
  cout << lineBreak << endl << endl;
  cout << "Question 3 (Do While loop)" << endl;
  cout << endl;

  // user input
  cout << "Enter a number: "; cin >> integer;
  cout << endl;

  // execute first before evaluating the condition
  do {
    // add spaces first before the stars
    cout << spaces;

    // reset j to 0
    j = 0;

    // nested loop will complete its iterations first before moving to the next iteration of the outer loop
    while(j < integer){
      // concatenate stars
      cout << "* ";
      // increment j to break the nested loop
      j++;
    }

    // move to the next row
    cout << endl;

    // add spaces after the last row
    if(j >= 1){
      spaces += ' ';
    }

    // decrement integer until it is equal to i
    integer--;

    // starts looping at the last row
  } while(integer > i);

  return 0;
}

int main() {
  // run the functions
  question1();
  question2();
  question3();

  return 0; 
}