#include<iostream>
using namespace std;
  
  int main() {
    int n; // row input 
    cout<<"Enter the number of rows: ";
    cin>>n;
    // loop starts here
    for ( int row = 0; row < n; row++ ) {
      
      for ( int col = 0; col < row+1; col++) {
        cout << col+1;
      }
      for ( int col = row; col >= 1; col-- ) {
        cout << col;
      }
      cout<<endl;
    }
    return 0;
  }