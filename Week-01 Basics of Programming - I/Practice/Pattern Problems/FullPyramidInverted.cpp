#include<iostream>
using namespace std;

  int main() {
    int n; // total no. of rows
    cout << "Enter the no. of rows: ";
    cin >> n; // takes row as input. 
    // loop to print the star pattern

    // outer loop 
    for ( int row = 0; row < n; row++ ) {
      // inner loop for printing the space 
      for ( int space = 0; space < row; space++ ) {
        cout << "  "; // prints row number of spaces.
      }

      for ( int star = 0; star < n-row; star++ ) {
        cout << "*   "; // prints n-row-1 number of stars.
      }
      cout << endl; // changes the line after each iteration of row. 
    }

    return 0;
  }