#include<iostream>
using namespace std;

  int main() {
  // loop to understand break statement
    for ( int i = 0; i < 5; i++ ) {
    cout << "Babbar"<< endl;
    }
    cout << "Love" << endl;
    // Above code will print 5 times Babbar and 1 time love

    cout << endl;

    // Let's use break keyword now 
    for ( int i = 0; i < 5; i++ ) {
    cout << "Babbar"<< endl;
    // Break is used to stop the loop
    break; // This will stop the loop when used. So Babbar will be printed only once.
    }
    cout << "Love" << endl;
  return 0;
  }