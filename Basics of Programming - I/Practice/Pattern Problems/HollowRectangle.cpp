#include<iostream>
using namespace std;

  int main() {
    int rownum, colnum; 
    // get rows and columns as input
    cout << "Enter the number of rows: ";
    cin >> rownum;
    cout << "Enter the number of columns: ";
    cin >> colnum;
    // loop for printing the solid rectangle pattern.
    for ( int row = 0; row < rownum; row++ ) {
      for ( int col = 0; col < colnum; col++ ) {
        // if first or last row and columns then prints stars else prints spaces.
        if ( row == 0 || row == rownum-1 || col == 0 || col == colnum-1 ) {
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }
      cout << endl; // changes the line after completion of stars printing after each row.
    }
    return 0;
  }