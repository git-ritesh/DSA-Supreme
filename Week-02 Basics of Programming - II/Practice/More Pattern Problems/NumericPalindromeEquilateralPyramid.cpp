#include<iostream>
using namespace std;

  int main() {
    int n ;
    cout << "Enter the no. of rows: "; 
    cin >> n ;
    // Outer loop for row starts here
    for ( int row = 0; row < n; row++ ) {
      // inner loop for space print
      for ( int space = 0; space < n-row; space++ ) {
        cout << "  ";
      }
      // inner loop for 1st half pyramid printing
      for ( int col = 0; col < row+1; col++ ) {
        cout << col+1 << " ";
      }
      // inner loop for 2nd half pyramid printing 
      for ( int col = row; col > 0; col-- ) {
        cout << col << " ";
      }
      
      cout << endl; // changes lines afer printing each row

    }
    return 0;
  }