#include <iostream>//enable cout, cin

// declare it to use cout, cin and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "_______________________________________________________________________";

int seatReservation(){
// user input | 2D array ( [5] = rows , [7] = columns )
  int input, seatArray[5][7] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 
  20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};

  // loop forever ( just kill the terminal if you want to start again )
  while(true){

    // line break
    cout << endl;
    cout << lineBreak << endl;
    cout << endl;

    // seat numbers
    // outer loop = rows
    for(int i = 0; i < 5; i++){
      // inner loop = columns
      for(int j = 0; j < 7; j++){
        // if only 1 digit add 3 spaces
        if(seatArray[i][j] < 10){
          cout << seatArray[i][j] << "   ";

          // if 2 digits add 2 spaces
        } else {
          cout << seatArray[i][j] << "  ";
        }
      }
      cout << endl;
    }

    cout << endl;
    cout << "Enter seat number to reserve : "; cin >> input; // user input
    cout << endl;

    // invalid user input
    if(input > 35 || input < 1){
      cout << "Invalid seat number: " << input << endl;
      // continue looping
      continue;
    }

    // for occupied seat
    bool occupiedSeat = false;

    // occupied seat numbers
    // outer loop
    for(int i = 0; i < 5; i++){
      // inner loop
      for(int j = 0; j < 7; j++){
        // if seat number is not occupied
        if(seatArray[i][j] == input){
          seatArray[i][j] = 0;
          cout << "Seat successfully reserved!" << endl;
          // occupied
          occupiedSeat = true;
        }
      }
    }

    // && operator evaluates truthy condition
    // if occupiedSeat is true doing !occupiedSeat will be false
    // this won't execute if occupiedSeat is true
    !occupiedSeat && cout << "Seat is taken: " << input << endl;
  }
  return 0;
}

int main(){
  seatReservation();

  return 0;
}