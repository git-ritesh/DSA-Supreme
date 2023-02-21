#include<iostream>
using namespace std;

  int main() {
    int n ; 
    cout << "Enter the no. of rows: ";
    cin >> n ; 
    // Outer loop for row printing
    for ( int row = 0; row < n; row++ ) {
      // inner loop for star printing
      for ( int star = 0; star < n+3-row; star++ ) { 
        cout << "* ";
      }
      // inner loop for value printing to make a pyramid like pattern
      for ( int col = 0; col < row+1; col++ ) {
        cout << col+1; 
        if ( col != row) {
          cout << " * ";
        }
      }
      // printing stars again as a replica for space.
      for ( int star = 0; star < n+3-row; star++ ) { 
        cout << " *";
      }
      cout << endl;
    }
    return 0;
  }