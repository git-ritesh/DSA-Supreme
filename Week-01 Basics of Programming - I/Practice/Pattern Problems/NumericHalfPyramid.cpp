#include<iostream>
using namespace std;

  int main () {
    int n; // total no. of rows
    cout << "Enter the number of rows: ";
    cin >> n; // takes total rows as input
    // loop starts here to print the numeric pattern
    for ( int row = 0; row < n; row++ ) {
      for ( int col = 0; col < row+1; col++ ) {
        cout << col+1; // prints the number from 1 to row number.
      }
      cout << endl; // changes the line after completion of each row. 
    }
    return 0;
  }