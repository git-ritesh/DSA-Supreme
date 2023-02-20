#include<iostream>
using namespace std;
  // Inverted Half Pyramid Star Pattern
//   * * * * *
//   * * * *
//   * * *
//   * *
//   * 
  int main() {
    // number of rows declaration
    int row;
    cout << "Enter the number of rows: " ;
    cin>> row ;
    // loop to print the star pattern
    for ( int rowCount = 0; rowCount < row; rowCount ++ ) {
      for (int colCount = rowCount; colCount < row; colCount++ ) {
        cout << "* " ;
      }
      cout << endl;
    }
    return 0;
  }