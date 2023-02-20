#include<iostream>
using namespace std;

  int main() {
    int n ; 
    cout << "Enter the no. of rows: ";
    cin >> n ; 
    // Outer loop for row
    int val = 0; 
    // Outer for printing the upper half 
    for ( int row = 0; row < n; row++ ) {
      // inner loop 
      for ( int col = 0; col < row+1; col++ ) {
        val++ ; 
        cout << val << " " ;
        if (col != row ) {
          cout << "* ";
        }
      }
      cout << endl;
    }
    // cout << val <<endl; to check the current value of val
    //Outer loop for printing the lower-half
    int start = val + 1 -n;
    for ( int row = 0; row < n; row++ ) {
      // inner loop 
      int k = start ;
      for ( int col = 0; col < n-row; col++ ) {
        cout << k << " ";
        k++;
        if ( col != n-row-1 ) {
          cout << "* ";
        }
      } 
      start = start - (n-row-1) ;
      cout << endl;
    }
    return 0;
  }