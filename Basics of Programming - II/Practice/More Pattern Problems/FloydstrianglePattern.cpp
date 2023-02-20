#include<iostream>
using namespace std;

  int main() {
    int n,count=1;
    cout << "Enter the no. of rows: ";
    cin >> n ;
    // Ourter loop for row 
    for ( int row = 0; row < n; row++ ) {
      // Inner loop to print the numeric values of floyd pattern
      for ( int col = 0; col < row+1; col++ ) {
        cout << count << " "; // prints the count values
        count++;
      }
      cout << endl;
    }
    return 0;
  }