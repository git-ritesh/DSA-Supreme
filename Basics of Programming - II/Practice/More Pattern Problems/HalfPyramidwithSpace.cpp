#include<iostream>
using namespace std;
  // Half Pyramid Star Pattern with Space
  //            *
  //          * *
  //        * * *
  //      * * * *
  //    * * * * *

  int main() {
    int rows; // number of rows declaration
    cout << "Enter the Number of Rows: " ; // input statement
    cin >> rows ; // takes row as user input
    // loop to print the Pattern
    for ( int rowCount = 0; rowCount < rows; rowCount++ ) {
      for ( int colCount = 0; colCount < rows; colCount++ ) {
          if (colCount < rows - rowCount-1 ) {
            cout << "  " ;
          }
          else {
            cout << "* ";
          }
      }
      cout << endl;
    }
    return 0;
  }