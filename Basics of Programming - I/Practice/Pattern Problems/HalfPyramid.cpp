#include<iostream>
using namespace std;
  // Half Pyramid Pattern 
      //      *
      //      * *
      //      * * *
      //      * * * *
      //      * * * * *

  int main() {
    int row; // Number of rows to print.
    cout << "Enter the number of rows: "; // input statement 
    cin >> row ; // takes rows as user input
    // loop to print the star pattern 
    for ( int rowCount = 0; rowCount < row ; rowCount++ ) { // row loop 
      for ( int colCount = 0; colCount < rowCount+1; colCount++ ) { // column loop 
        cout<<"* ";
      }  
      cout<<endl;
   }
    return 0;
  }