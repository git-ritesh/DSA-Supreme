#include<iostream>
using namespace std;

  int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n ;
    // Outer loop for row starts here
    for ( int row = 0; row < n; row++ ) {
      // inner loop for columns start here
       for ( int col = 0; col < n-row; col++ ) {
        // conditions when values will be printed
        if ( row == 0 || col == 0 || col == n-row-1 ) {
          cout << col+1 << " ";
        }
        else {
          // when space will be printed
          cout << "  ";
        }
       }
       cout << endl;
    }
    return 0;
  }