#include <iostream> // enable cout, cin

// declare std for using cout, cin, and string without using the prefix 'std::'
using namespace std;

// reusable line break for each question
const string lineBreak = "____________________________________________________________________________________";

/*
  Write a program that will accept an integer and execute one of the following based on the input using IF statements:
    a.If 0, display only “Hello World”.
    b.If 1, display only “I am Groot”.
    c.If 2, display only “To the Top”.
    d.If 3, display only “Where is the horizon”.
    e.If 4, display only “I do not know”.
    If none of the above, display only “Yeah, I will.”.
*/
int question1(){
  int numInput; // accepts integer inputs
  string userInput; // accepts string inputs

  cout << lineBreak << endl;
  cout << endl;
  cout << "Question 1" << endl; // labels
  cout << endl;

  // getline() is only used for strings so accept user inputs as strings first                                     
  cout << "Press a number from (0 - 4): "; getline(cin >> ws, userInput); 
  cout << endl; 

  // string to integer
  numInput = stoi(userInput);

  // if numInput is 0, output "Hello World", add a line break, and return immediately
  if(numInput == 0) { cout << "Hello World" << endl << lineBreak << endl; return 0; }
  
  // if numInput is 1, output "I am Groot", add a line break, and return immediately
  if(numInput == 1) { cout << "I am Groot" << endl << lineBreak << endl; return 0; }

  // if numInput is 2, output "To the Top", add a line break, and return immediately
  if(numInput == 2) { cout << "To the Top" << endl << lineBreak << endl; return 0; }

  // if numInput is 3, output "Where is the horizon", add a line break, and return immediately
  if(numInput == 3) { cout << "Where is the horizon" << endl << lineBreak << endl; return 0; }

  // if numInput is 4, output "I do not know", add a line break, and return immediately
  if(numInput == 4) { cout << "I do not know" << endl << lineBreak << endl; return 0; }

  // if numInput is not 0, 1, 2, 3, or 4, output "Yeah, I will.", add a line break
  cout << "Yeah, I will." << endl << lineBreak << endl;
  
  return 0;
}

/*
  Write a program that will accept an integer and execute one of the following based on the input using SWITCH statements:
    a.If 0, display only “Hello World”.
    b.If 1, display only “I am good”.
    c.If 2, display only “To the Top”.
    d.If 3, display only “Where is the horizon”.
    e.If 4, display only “I do not know”.
    f.If none of the above, display only “Yeah, I will.”.
*/
int question2(){
  int numInput; // accepts integer inputs
  string userInput; // accepts string inputs

  cout << lineBreak << endl;
  cout << endl;
  cout << "Question 2" << endl; // labels
  cout << endl;

  // getline() is only used for strings so accept user inputs as strings first
  cout << "Press a number from (0 - 4): "; getline(cin >> ws, userInput);
  cout << endl;

  // string to integer
  numInput = stoi(userInput);

  // switch statement
  // find a case that matches numInput
  switch(numInput) {

    // if numInput is 0, output "Hello World", add a line break
    case 0: cout << "Hello World" << endl << lineBreak << endl; break;

    // if numInput is 1, output "I am good", add a line break
    case 1: cout << "I am good" << endl << lineBreak << endl; break;

    // if numInput is 2, output "To the Top", add a line break
    case 2: cout << "To the Top" << endl << lineBreak << endl; break;

    // if numInput is 3, output "Where is the horizon", add a line break
    case 3: cout << "Where is the horizon" << endl << lineBreak << endl; break;

    // if numInput is 4, output "I do not know", add a line break
    case 4: cout << "I do not know" << endl << lineBreak << endl; break;

    // if numInput is not 0, 1, 2, 3, or 4, output "Yeah, I will.", add a line break
    default: cout << "Yeah, I will." << endl << lineBreak << endl;
  }

  return 0;
}

/*
  Write a program that will divide the two floating points entered by the user 
  (first number entered divided by the second number entered). 
  Make sure your application handles all possible scenarios with floating points.
*/
int question3(){
  float num1, num2; // accepts float inputs (numbers with/without decimals)
  string input1, input2; // accepts string inputs

  cout << lineBreak << endl;
  cout << endl;
  cout << "Question 3" << endl; // labels
  cout << endl;

  // getline() is only used for strings so accept user inputs as strings first
  cout << "Enter your first number: "; getline(cin >> ws, input1);
  cout << endl;
  cout << "Enter your second number: "; getline(cin >> ws, input2);
  cout << endl;

  // string to float
  num1 = stof(input1);
  num2 = stof(input2);

  // output
  cout << "Result of " << num1 << " ÷ " << num2 << " = " << num1 / num2 << endl;

  // add a line break
  cout << lineBreak << endl;

  return 0;
}

int main(){
  // run the outputs of the questions
  question1(); 
  question2(); 
  question3();

  return 0;
}