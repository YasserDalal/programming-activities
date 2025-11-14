#include <iostream> // enables cout

// define the std so we avoid by reusing it over and over 'makes the code cleaner'
using namespace std;

// used for returning NULL in each functions in global scope
bool yasserDalalErrors = NULL;
/*
  Write a program that displays “Hello” in one line, 
  and “World” in another line using exactly two (2) COUT statements.
*/
int question1(){

  cout << "Hello" << endl;
  cout << "World" << endl;

  return yasserDalalErrors; // means no errors found
}

/*
  Write a program that displays “Hello” in one line, 
  and “World” in another line using exactly ten (10) COUT statements.
*/
int question2(){

  cout << "Hello" << endl;
  cout << "World" << endl;
  cout << "Hello" << endl;
  cout << "World" << endl;
  cout << "Hello" << endl;
  cout << "World" << endl;
  cout << "Hello" << endl;
  cout << "World" << endl;
  cout << "Hello" << endl;
  cout << "World" << endl;

  return yasserDalalErrors; // means no errors found
}

/*
  Write a program that displays “Hello” in one line, 
  and “World” in another line using exactly one (1) for the “Hello” 
  and exactly five (5) COUT statements for the “World”.
*/
int question3(){
  // we can still use 'std::' even if we define it before
  // we won't get any errors
  std::cout << "Hello" << std::endl;
  std::cout << "World" << std::endl;
  std::cout << "World" << std::endl;
  std::cout << "World" << std::endl;
  std::cout << "World" << std::endl;
  std::cout << "World" << std::endl;

  return yasserDalalErrors; // means no errors found
}

int main(){
  /* run the outputs of the questions */
  cout << "" << endl; // creates new line
  
  cout << "Question 1" << endl;
  question1();
  cout << "" << endl; // creates new line

  cout << "Question 2" << endl;
  question2();
  cout << "" << endl; // creates new line

  cout << "Question 3" << endl;
  question3();
  cout << "" << endl; // creates new line

  return yasserDalalErrors; // means no errors found
}