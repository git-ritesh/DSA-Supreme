#include<iostream>
using namespace std;

   int main() {
    int n; // total number of rows 
    cout << "Enter the total no. of rows: ";
    cin >> n;
    // loop to print the numeric Pyramid pattern
    for ( int row = 0; row < n; row++ ) {
      // Inner Loop 
      for ( int space = 0; space < n-row; space++ ) {
        cout << "  "; // prints n-row-1 number of spaces in each row. 
      }
      // Column loop 
      for ( int col = 0; col < row+1 ; col++ ) {
        cout << col+row+1 << " "; // prints from row+1 to 2*row+1.
      }
      // 2nd half of the pyramid
      for ( int col = row; col > 0; col-- ) {
        cout << col+row << " ";
      }
      cout << endl; // prints the new line after printing total values in the row.
    }
    return 0; 
   }