#include<iostream>
using namespace std;

  int main() {
    int n; // total rows
    cout << "Enter the no. of rows: ";
    cin >> n;
    // loop to print the pattern 
    // Outer loop 
    for ( int row = 0; row < n; row++ ) {
      // inner loop 
      // loop for space print
      for ( int space = 0; space < n-row; space++ ) {
        cout << "  ";   // prints the space 
      }
      for ( int star = 0; star < row+1; star++ ) {
        cout << "*   "; // prints the stars 
      }
      cout << endl; // changes the line after ieration of each row.
    }
  return 0;
  }