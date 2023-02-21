#include<iostream>
using namespace std;

  int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
    // loop starts here
    // Outer loop for row
    for ( int row = 0; row < n; row++ ) {
      // inner loops start here
      for ( int space = 0; space < n-row; space++ ) { // prints n-row spaces.
        cout << " ";
      }
      for ( int col = 0; col < row+1; col++ ) {
        // condition for printing stars
        if ( col == 0 || col == row || row == n-1 ) {
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }
      cout << endl; 
    }
    
    return 0;
  }