#include<iostream>
using namespace std;
  
  int main() {
    int n; // no. of rows declalaration
    cout << "Enter the no. of rows: ";
    cin >> n ;
    // Loop for printing the Upper half Part

          // Outer loop 
    for ( int row = 0; row < n; row++ ) {
      // inner loop for columns printing

      for ( int col = 0; col < row+1; col++ ) {
        // This will print the upper left part of the butterfly with stars. 
        cout << "*";
      } 
      // Now loop for printing the space-between part which is double the left one
      for ( int space = 0; space < 2*n - 2*row-2; space++ ) { // 0 to 2*row-2
      cout << " "; // 2*row -2 
      }
      // Now loop for printing the right half star pattern 
      for ( int col = 0; col < row+1; col++ ) {
        cout << "*"; 
      }
      cout << endl;
    }
    
    // Lower Half
    // outer loop
    for ( int row = 0; row < n; row ++ ) {
      // inner loop
      for ( int col = 0; col < n-row; col++ )  {
        // prints the left part 
        cout << "*"; // prints n-row number of stars   
      }
      // space-between loop
      for ( int space = 0; space < 2*row; space++ ) {
        cout << " "; // prints 2*row no. of space in each row
      }
      for ( int col = 0; col < n-row; col++ ) {
        cout << "*" ; // prints n-row-1 number of stars
      }
      cout << endl; // prints new line after each row print.
    }


    return 0;
  }