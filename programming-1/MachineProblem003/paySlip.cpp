#include "paySlipClass.h" // import the all the classes inside "paySlipClass.h"
#include <iostream> // enables cout, cin
#include <iomanip> // enables setprecision

// declare std to use cout, cin, and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "____________________________________________________________________";

// formats the number with decimal
string formatNumber(double num){
  stringstream fixedNum;

  // up to 2 decimal places
  fixedNum << fixed << setprecision(2) << num;

  // convert to the formatted number string
  string lengthOfNum = fixedNum.str();
  
  // find the decimal place
  int decimalPlace = lengthOfNum.find(".");

  // insert commas
  for(int i = lengthOfNum.length() - 3; i > 0; i-=3){
    if(i == decimalPlace){ continue; }
    lengthOfNum.insert(i, ",");
  }

  // return the formatted number
  return "Php " + lengthOfNum;
}

int main(){
  // create an instance of the class
  PaySlip paySlip;

  // variables for inputs
  string name;
  double salary;
  int overtimeHours;

  // add a line break
  cout << lineBreak << endl << endl;

  // name input
  cout << "Enter your Name: "; getline(cin >> ws, name);
  paySlip.setName(name);

  do {
    // salary input
    cout << "Enter your Salary (not less than 10000): "; cin >> salary;
  } while (salary < 10000);
  paySlip.setBasicSalary(salary);

  do {
    // overtime hours input
    cout << "Enter your Overtime Hours (not less than 1): "; cin >> overtimeHours;
  } while (overtimeHours < 1);
  paySlip.setOvertimeHours(overtimeHours);

  // compute overall
  paySlip.determinePayGradeAndTaxRate();
  paySlip.compute();

  // add a line break
  cout << lineBreak << endl << endl;
  
  // show the output
  cout << "Employee Name		  : " << paySlip.getName() << endl;
  cout << "Basic Salary		  : " << formatNumber(paySlip.getBasicSalary()) << endl;
  cout << "Pay Grade		  : " << paySlip.getPayGrade() << endl;
  cout << "No. of OT Hours		  : " << paySlip.getOvertimeHours() << endl;
  cout << "OT Pay		          : " << formatNumber(paySlip.getOvertimePay()) << endl;
  cout << "Gross Pay		  : " << formatNumber(paySlip.getGrossPay()) << endl;
  cout << "Withholding Tax		  : " << formatNumber(paySlip.getWithholdingTax()) << endl;
  cout << "Net Pay		          : " << formatNumber(paySlip.getNetPay()) << endl; 

  cout << endl;
  return 0;
}