#include<iostream>
using namespace std;

  int main() {
    int n; 
    cout << "Enter the no. of rows: ";
    cin >> n ;
    // loop for printing the upper half 
    for ( int row =0; row < n; row++ ) {
      // inner loop or column loop
      for ( int col = 0; col < row+1; col++ ) {
        // condition when star will be printed 
        if ( col == 0 ) {
          cout << "* ";
        }
        else {
          cout << col << " "; // prints from 2nd column
        }
      }
      // printing the remaining part of the pattern
      for ( int col = row; col > 0; col-- ) {
        if ( col != 1) {
          cout << col-1 << " ";
        }
        else {
          cout << "* ";
        }
      }
      cout << endl; 
    }
    // prints lower half
    n -= 1; 
    // Outer loop for row
    for ( int row = 0; row < n-1; row++ ) { // n-2 coz n is declared already above
      // inner loop 
      for ( int col = 0; col < n-row; col++ ) {
        // condition  for stars
        if ( col == 0 ) {
          cout << "* ";
        }
        else {
          cout << col << " " ;
        }
      }
      // remaining half
      for ( int col = n-row-1; col > 0; col-- ) {
        if ( col == 1 ) {
          cout << "* ";
        }
        else {
          cout << col-1; 
        }
      }
      cout << endl;
  }

  return 0; 
}