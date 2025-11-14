#include <iostream> // enable to use cout, cin

// declare std for using cout, cin, and string without using the prefix 'std::'
using namespace std;

/*
  Write a program that accepts user’s section, and display them back with the format “ Section: user’s section ”.
*/
int question1() {
  string userSection; // accepts strings from user input
  
  // break line
  cout << "____________________________________________________________________________________" << endl;
  cout << "" << endl;
  
  cout << "Question 1" << endl; // labels
  cout << "" << endl;

/*
  use getline() to accept spaces on user inputs
  so if the user presses enter, the whole input including the spaces will be a single string

  we can still use getline(cin >> ws, variableName) 
  it works exactly the same but only if we have a multiple cin
*/
  cout << "What is your Section?: "; getline(cin, userSection);//getline(cin >> ws, userSection);
  cout << "" << endl;

  // output
  cout << "Section: " << userSection;
  
  // break line
  cout << "" << endl;
  cout << "____________________________________________________________________________________" << endl;

  return false;
}

/*
  Write a program that accepts user’s daily budget and display the product of the daily budget and itself.
*/
int question2(){
  long long userBudget; // accepts higher value numbers
  string budgetString; // accepts strings from user input
  
  // break line
  cout << "____________________________________________________________________________________" << endl;
  cout << "" << endl;
  
  cout << "Question 2" << endl; // labels
  cout << "" << endl;

/*
  when question3() runs it will skip the first input so I used getline() in question2()
  getline() is only used for strings
  so accept user inputs as strings first
*/
  cout << "What is your Daily Budget?: "; getline(cin, budgetString);
  cout << "" << endl;

  // convert string to long long 
  userBudget = stoll(budgetString);
  
  // output
  cout << "The Product of " 
  << userBudget << " is ==> " 
  << userBudget << " x " << userBudget << " = " 
  << userBudget * userBudget;
  
  // break line
  cout << "" << endl;
  cout << "____________________________________________________________________________________" << endl;

  return false;
}

/*
  Write a program that accepts user’s name, password and address and display them back using the format “Hi, I am user’s name. I live at user’s address.”.

    Restrictions:
      -Use only three variables.
      -Make sure you support spaces.
*/
int question3(){
  string userName, password, address; // accepts 3 string inputs from the user

  // break line
  cout << "____________________________________________________________________________________" << endl;
  cout << "" << endl;

  cout << "Question 3" << endl; // labels
  cout << "" << endl;

/* 
   as you can see we use getline(cin >> ws, variableName) 
   because there are multiple user inputs 
   
   cin >> ws, means it will clear the whitespaces from the previous input 

   so after entering the input, it will proceed to the next new line of input 
*/
  cout << "What is your name?: "; getline(cin >> ws, userName);
  cout << "" << endl;

  cout << "Enter your password: "; getline(cin >> ws, password);
  cout << "" << endl;

  cout << "What is your address?: "; getline(cin >> ws, address);
  cout << "" << endl;
  cout << "" << endl;

  // output
  cout << "Hi, I am " << userName << "." << " I live at " << address;

  // break line
  cout << "" << endl;
  cout << "____________________________________________________________________________________" << endl;

  return false;
}

int main(){
  // run the outputs of the questions
  question1();
  question2();
  question3();
  
  return false;
}