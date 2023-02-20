#include<iostream>
using namespace std;

  int main() {
    int n; // no. of rows 
    cout << "Enter the no. of rows: ";
    cin >> n;
    // loop to print the solid diamond
    // loop for the upper half
    for ( int row = 0; row < n; row++ ) {
      // inner loop for space
      for ( int space = 0; space < n-row-1; space++ ) {
        cout << " ";
      }
      // loop for star printing
      for ( int star = 0; star < row+1; star++ ) {
        cout << "* ";
      }
      cout << endl; // changes line after each row print
    }

    // for printing the lower half of the diamond
    // outer loop for row
    for ( int row = 0; row < n; row++ ) {
      // inner loops start here
      // loop for printing the spaces
      for ( int space = 0; space < row; space++ ) {
        cout << " "; // prints row number of spaces.
      }
      // for printing the stars
      for ( int star = 0; star < n-row; star++ ) {
        cout << "* "; // prints n-row number of stars
      }
      cout << endl; // changes line after each row print. 
    }
    return 0;
  }