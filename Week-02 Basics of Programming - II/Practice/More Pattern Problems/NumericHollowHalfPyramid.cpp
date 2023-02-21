#include<iostream>
using namespace std;

  int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
    // loop for printing the pattern starts here
    // Outer loop for row
    for ( int row = 0; row < n; row++ ) {
      // inner loop starts here
      for ( int col = 0; col < row+1; col++ ) {
        // condition when numeric value is printed
        if (  col == 0 || col == row || row == n-1 ) {
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