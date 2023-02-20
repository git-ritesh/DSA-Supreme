#include<iostream>
using namespace std;
  
  int main () {
    int n; // takes rows as input.
    cout << "Enter the number of rows: ";
    cin >> n; 
    // loop to print the square pattern 
    for ( int row = 0; row < n; row++ ) {
      for ( int col = 0; col < n; col++ ) {
        if ( row == 0 || row == n-1 || col ==  0 || col == n-1 ) {
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }
      cout << endl; // changes line after the inner loop termination to print the stars in new line
    }
    return 0;
  }