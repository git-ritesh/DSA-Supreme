#include<iostream>
using namespace std;

  int main() {
    int n ; // no. of rows in total
    cout << "Enter the no. of rows: ";
    cin >> n;
    // loop for inverted 
    for ( int row = 0; row < n; row++ ) {
      // Inner loops 
      // for ( int space = 0; space < row; space++ ) {
      //   cout << " "; // prints row number of spaces. 
      // }
      for ( int col = 0; col < n-row; col++ ) {
        if ( col == 0 || col == n-row-1 || row == 0) {
          cout << "* ";  // prints n-row starts in each row 
        }
        else {
          cout << "  ";
        }
      }
      cout << endl; // changes the line 
    }
    return 0;
  }