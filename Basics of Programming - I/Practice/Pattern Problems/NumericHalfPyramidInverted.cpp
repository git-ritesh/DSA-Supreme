#include<iostream>
using namespace std;

  int main() {
    int n; // total rows
    cout << "Enter the no. of rows: ";
    cin >> n;
    // loop to print the pattern
    // outer loop for row
    for ( int row = 0; row < n; row++ ) {
      // inner loop for columns
      for ( int col = 0; col < n-row; col++ ) {
        cout << col+1; // prints the value from 1 to (n-row)-1 numbers 
      }
      cout << endl; // changes line after total values printing in a row. 
    }

    return 0;
  }

