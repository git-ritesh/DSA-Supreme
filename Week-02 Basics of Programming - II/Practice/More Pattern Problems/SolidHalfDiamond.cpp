#include<iostream>
using namespace std;

  int main() {
    int n ;
    cout << "Enter the no. of rows: "; 
    cin >> n ;
    // Upper half pyramid
    // outer loop for row 
    for ( int row = 0; row < n; row++ ) {
      // inner loop for printing the stars
      for ( int col = 0; col < row+1; col++ ) {
        cout << "* "; // prints row number of stars. 
      }
      cout << endl; 
    }
    // lower half Pyramid
     for ( int row = 0; row < n; row++ ) {
      // inner loop for printing the stars
      for ( int col = 0; col < n-row; col++ ) {
        cout << "* "; // prints row number of stars. 
      }
      cout << endl; 
    }
    return 0;
  }