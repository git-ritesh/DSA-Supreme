#include<iostream>
using namespace std;

  int main() {
    int n; // rows
    cin >> n;
    for ( int row = 0; row < n; row++ ) {
      for ( int col = 0; col < 2*n; col++ ) {
        if ( (col < row+1) || col > (2*n-row-2)) {
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }  
      cout << endl;
    }
    
    // for ( int row = 0; row < n; row++ ) {
    //   for ( int col = 0; col < 2*n; col++ ) {
    //     if ( (col < row+1) || col > (2*n-row-2)) {
    //       cout << "* ";
    //     }
    //     else {
    //       cout << "  ";
    //     }
    //   }
    //   cout << endl;
    // }

    return 0;
  }