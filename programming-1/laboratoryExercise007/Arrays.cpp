#include <iostream>// enables cout, cin

// declare std to use cout, cin, and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "_________________________________________________________________";

/*
  Write a program that will accept five (5) integers and display them to the users. 
  You are limited to using only two (2) variables (including the array).
*/
int question1(){
//user input | array
  int input, integer[5];

  // line break
  cout << endl;
  cout << lineBreak << endl;
  cout << endl;
  
  // labels
  cout << "Question 1" << endl;
  cout << endl;

  // accept user input 5 times
  for(int i = 0; i < 5; i++){
    cout << "Enter a number[" << i + 1 << "]" << ": "; cin >> input;
    integer[i] = input;
  }

  // show the output
  cout << endl;
  cout << "Array contains 5 elements: [ " << 
  integer[0] << ", " << integer[1] << ", " << integer[2] << ", " << integer[3] << ", " << integer[4] << " ]" << endl;

  return 0;
}

/*
  Write a program that will display an equilateral triangle with a height depending on the user. 
  The minimum height is 1, the maximum height is 10. Use an array to display the specific character on the specific row.
  The array will be: { 0 := “A”, 1:= “B”, 2 := “C”, 3 := “D”, 4 := “E”, 5 := “F”, 6 := “G”, 7 := “H”, 8 := “I”, 9 := “J” }. You are limited to four (4) variables only (including the array).
*/
int question2(){
  // user input
  int input;
  // explicit array
  const string integers[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

  // line break
  cout << endl;
  cout << lineBreak << endl;
  cout << endl;

  // labels
  cout << "Question 2" << endl;
  cout << endl;

  // accept user input from 1 to 10
  do {

    cout << "Enter a number from (1 - 10): "; cin >> input;

    // do it again if the input is not from 1 to 10
  } while(input > 10 || input <= 0);

  cout << endl;

  // start the loop from 0 to input value 
  for(int i = 0; i < input; i++){

    // If it is second row and above decrease the spaces. If not, increase the spaces
    i > 0 ? cout << string(input - i, ' ') : cout << string(input, ' ');
    
    // concatenate the letters
    for(int j = 0; j <= i; j++){
      cout << " " << integers[i];
    }
    cout << endl;
  }

  return 0;
}

/*
  Write a program that will ascendingly sort six (6) integers from the user. Use only four (4) variables (including the array).
*/
int question3(){
  // array that holds 6 integers | num for index
  int sortedIntegers[6], num = 0;

  // line break
  cout << endl;
  cout << lineBreak << endl;
  cout << endl;

  // labels
  cout << "Question 3" << endl;
  cout << endl;

  // accept user input 6 times
  do {

    cout << "Enter a number [" << num + 1 << "]: "; cin >> sortedIntegers[num];
    num++;

    // do it again until it breaks
  } while(num < 6);

  // reset the num, use it in outer loop and get the length of the array
  for(num = 0; num < sizeof(sortedIntegers) / sizeof(sortedIntegers[0]); num++){

    // loop all the elements of the array for each element
    for(int j = 0; j < num; j++){
      // if the current element is greater than the element that we are looping
      if(sortedIntegers[j] > sortedIntegers[num]){
        // save the position of the element that we are looping
        int temp = sortedIntegers[num];
        // swap position of the element that we are looping, to the current element
        sortedIntegers[num] = sortedIntegers[j];
        // swap position of the current element, to the element that we are looping
        sortedIntegers[j] = temp;
      }
    }
  }
  cout << endl;

  // show the output
  cout << "Sorted array: [ " 
  << sortedIntegers[0] << ", " << sortedIntegers[1] << ", " 
  << sortedIntegers[2] << ", " << sortedIntegers[3] << ", "
  << sortedIntegers[4] << ", " << sortedIntegers[5] << " ]" << endl;

  cout << endl;
  return 0;
}

int main(){
  // run the outputs of the questions
  question1(); 
  question2(); 
  question3();

  return 0;
}