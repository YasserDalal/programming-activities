#include <iostream>// enables cout, cin

// declare std to use cout, cin, and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "_________________________________________________________________";

int enrollSlip(){
  // 30% variable for downPayment
  const float thirtyPercent = 0.30;

  // variable for calculations and evaluations
  long tuitionFee, balance, downPayment;
  int yearLevel, ratePerUnit;
  float units;
  // variable for user input
  string studentName, course, yearString, unitString, yearName;

  // user inputs
  cout << "Student Name	        "   << ": "; getline(cin >> ws, studentName);
  cout << "Program/Course	        " << ": "; getline(cin >> ws, course);
  cout << "Year Level	        "     << ": "; getline(cin >> ws, yearString);
  cout << "No. of Units	        "   << ": "; getline(cin >> ws, unitString);
  cout << endl;

  // convert string to number
  yearLevel = stoi(yearString); // string to integer
  units = stof(unitString); // string to float

  // Freshman Expenses
  if(yearLevel == 1) {
    yearName = "Freshman";
    ratePerUnit = 1500;

    // Sophomore Expenses
  } else if(yearLevel == 2) {
    yearName = "Sophomore";
    ratePerUnit = 1800;

    // Junior Expenses
  } else if(yearLevel == 3) {
    yearName = "Junior";
    ratePerUnit = 2000;

    // Senior Expenses
  } else if(yearLevel == 4 || yearLevel == 5) {
    yearName = "Senior";
    ratePerUnit = 2300;

    // Invalid year level
  } else {
    // execute this if all if/else if statements fail
    cout << "Invalid year level: " << yearLevel << endl;
    cout << endl;
    cout << "Please enter a valid year level (1 - 5)";

    // end the program immediately
    return 0;
  }

  // start the calculations
  tuitionFee = units * ratePerUnit; // tuitionFee
  downPayment = thirtyPercent * tuitionFee; // downPayment
  balance = tuitionFee - downPayment; // balance

  // output
  cout << lineBreak << endl;
  cout << endl;
  cout << "                    ENROLLMENT SLIP" << endl;
  cout << endl;

  // insert the variable values
  cout << "Student Name	           " << ":" << studentName << endl;
  cout << "Program/Course	           " << ":" << course << endl;
  cout << "Year Name	           " << ":" << yearName << endl;
  cout << "No. of Units	           " << ":" << units << endl;
  cout << "Tuition Fee	           " << ":" << tuitionFee << endl;
  cout << "Down Payment	           " << ":" << downPayment << endl;
  cout << "Balance	                   " << ":" << balance << endl;

  return 0;
}

int main(){
  // run the program 
  enrollSlip();

  return 0;
}