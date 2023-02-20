#include<iostream>
using namespace std;

  int main() {
    int n; // row input
    cout<<"Enter the number of rows: ";
    cin >> n;
    for ( int row = 0; row < n; row++ ) {
      for (int col = 0; col < n-row; col++ ) {
        cout<<"*";
      }
      
      for ( int space = 0; space < 2*row; space++ ) {
        cout<<" ";
      }
      for (int col = 0; col < n-row; col++ ) {
        cout<<"*";
      }
    cout<<endl;
    }
    // lower half
    for ( int row = 0; row < n; row++ ) {
        for ( int col = 0; col < row+1; col++ ) {
        cout<<"*";
      }
      for ( int space = 0; space < 2*n - 2*row-2; space++) {
        cout<<" ";
      }
      for ( int col = 0; col < row+1; col++ ) {
        cout<<"*";
      }
      cout<<endl;
      }
    return 0;
  }