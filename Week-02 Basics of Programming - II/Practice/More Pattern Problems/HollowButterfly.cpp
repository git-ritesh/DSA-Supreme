#include<iostream>
using namespace std;

  int main() {
    int n ;
    cout << "Enter the number of rows: ";
    cin >> n ;
    
    // prints upper half
    // Outer loop 
    for ( int row = 0; row < n; row++ ) {
      // inner loops
      for ( int col = 0; col < row+1; col++ ) {
       if ( col == 0 || col == row ) {
        cout << "*"; // prints stars only when col is zero or last.
       }
       else {
        cout << " "; // prints space 
       }
      }
      // space between loop 
      for ( int space = 0; space < 2*n-2*row-2; space++ ) {
        cout << " "; // prints 2n-2row-2 spaces
      }
      // loop for printing the right half star pattern 
      for ( int col = 0; col < row+1; col++ ) {
       if ( col == 0 || col == row ) {
        cout << "*"; // prints stars only when col is zero or last.
       }
       else {
        cout << " "; // prints space 
       }
      }
      cout << endl; // prints new line after each row print.
    }

    // Lower Half
    // outer loop
    for ( int row = 0; row < n; row ++ ) {
      // inner loop
      for ( int col = 0; col < n-row; col++ )  {
        // prints the left part 
        if ( col == 0 || col == n-row-1 ) {
          cout << "*"; // prints stars in the first and last columns only.
        }
        else {
          cout << " "; // prints spaces between first and last cols.
        }
      }
      // space-between loop
      for ( int space = 0; space < 2*row; space++ ) {
        cout << " "; // prints 2*row no. of space in each row
      }
      for ( int col = 0; col < n-row; col++ ) {
        if ( col == 0 || col== n-row-1 ) {
          cout << "*";  // prints stars in the first and last columns only.
        } // prints n-row-1 number of stars
        else {
          cout << " "; // prints spaces between the stars.
        }
      }
      cout << endl; // prints new line after each row print.
    }
    return 0;
  }