#include<iostream>
using namespace std;

  int main() {
    int n; // toral no. of rows
    cout << "Enter the no. of rows: ";
    cin >> n;
    // loop to print the numeric full pyramid
    // Outer loop which iterates up to n-1
    for ( int row = 0; row < n; row++ ) {
      // innner loop for space
      for ( int space = 0; space < n-row; space++ ) {
        cout << " "; // prints n-row-1 number of spaces in each row before printing the numbers.
      }
      // loop for printing the numbers
      for ( int col = 0; col < row+1; col++ ) {
        // condition for first and last line
      if ( row == n-1 || col == 0 || col == row ){
        cout << col+1 << " "; 
      }
      else {
        cout << "  ";
      }
    }
      cout << endl;
  }
    return 0;
}