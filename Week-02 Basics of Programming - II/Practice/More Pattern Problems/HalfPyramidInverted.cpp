#include<iostream>
using namespace std;
  // Inverted Half Pyramid Pattern with Space 
  // * * * * *
  //   * * * *
  //     * * *
  //       * *
  //         * 
  
  int main() {
    int row; // no. of rows declaration
    cout << "Enter the number of rows: " ;
    cin >> row ; // takes row as user input
    // loop for printing the Pattern
    for ( int rowCount = 0; rowCount < row; rowCount++ ) {
      for ( int colCount = 0; colCount < row; colCount++ ) {
        if ( colCount < rowCount) {
         cout << "  "; 
        }
        else {
          cout <<"* ";
        }
      }
      cout << endl;
    }
    return 0;
  }