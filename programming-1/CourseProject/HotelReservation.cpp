#include <iostream> // enables cout, cin

// declare std to use cout, cin, and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "_____________________________________________________________";

int main(){
  // variables for user inputs
  string name;
  int age = 0, guests = 0;
  float days = 0;

  // line break
  cout << lineBreak << endl << endl;

  // name input
  cout <<  "Customer Name: "; getline(cin >> ws, name);

  // age input
  do {
    cout <<  "Age: "; cin >> age;

    // check if the age is less than or equal to 0 ( means invalid age )
    if(age <= 0){
      cout << endl << "Invalid Age: " << age << endl << endl; 

      // check if the age is less than or equal to 17 ( means minor age)
    } else if(age <= 17){
      cout << endl << "You're still a minor" << endl;
      cout << "Please enter a legal age (18 y/o & above)" << endl << endl;
    }
  } while(age <= 17);

  // guests input
  do {
    cout <<  "Number of guests: "; cin >> guests;

    // check if the number of guests is less than or equal to 0 ( means invalid guests )
    if(guests <= 0){
      cout << endl << "Invalid number of Guests: " << guests << endl;
      cout << "Please enter a number greater than 0"<< endl << endl;
    } 
  } while(guests <= 0);
  
  // days input
  do {
    cout <<  "Number of days: "; cin >> days;

    // check if the number of days is less than or equal to 0 ( means invalid days )
    if(days <= 0){
      cout << endl << "Invalid number of Days: " << days << endl;
      cout << "Please enter a number greater than 0"<< endl << endl;
    } 
  } while(days <= 0);

  // variables for calculations
  double totalPayment, downPayment, balance;
  int dailyRate;

  // calculate daily rate
  if(guests == 1){
    dailyRate = 1000;
  } else if(guests == 2){
    dailyRate = 1800;
  } else if(guests == 3){
    dailyRate = 2700;
  } else if(guests == 4){
    dailyRate = 3600;
  } else if(guests >= 5){
    dailyRate = 4500;
  }

  // calculate total payment
  totalPayment = dailyRate * days;
  downPayment = totalPayment * 0.40;
  balance = totalPayment - downPayment;

  // line break
  cout << lineBreak << endl << endl;

  // show the output
  cout << "            Hotel Reservation Slip" << endl << endl;
  
  cout << "Customer Name      : " << name << endl; 
	cout << "Age                : " << age << endl; 
	cout << "Number of guests   : " << guests << endl; 
	cout << "Number of days     : " << days << endl; 
	cout << "Total Payment      : " << totalPayment << endl; 
	cout << "Down Payment       : " << downPayment << endl;  
	cout << "Balance            : " << balance << endl; 

  cout << endl;
  return 0;
}