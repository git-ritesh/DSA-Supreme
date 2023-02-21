#include<iostream>
using namespace std;

  int main() {
    int n; // row input 
    cout<<"Enter the number of rows: ";
    cin>>n;
    for (int row = 0; row < n; row++ ) {
      for (int space = 0; space < n-row-1; space++ ) {
        cout<<" ";
      }
      for (int col = 0; col < 2*row+1; col++ ) {
        // if first character of if last character 
        if (col == 0) {
          cout<<"*";
        }
        else if (col == 2*row) {
          // last character
          cout<<"*";
        }
        else {
          cout<<" ";
        }
      }
      cout<<endl;
    }
    for (int row = 0; row < n; row++ ) {
      // prints space 
      for (int space = 0; space < row; space++) {
        cout<<" ";
      }
      for ( int col = 0; col < 2*n-2*row-1; col++ ) {
        // if first or last character 
        if ( col == 0 || col == 2*n-2*row-2 ) {
          cout<<"*";
        }
        else {
          cout<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
  }