#include<iostream>
using namespace std;

  int main() {
    // Case 1
    bool a = true;
    bool b = false;
    // Output of a AND b. 
    cout << ( a & b ) << endl;

    // Case 2
     a = true;
     b = true;
    // Output of a AND b.
    cout << ( a & b ) << endl;
    // Declaring a and b with integer value
     int p = 2;
     int q = 3;
    // 2 & 3 (Bitwise) 
    cout << ( p & q ) << endl;

    p = 5 ;
    q = 10;
    // 5 & 10.
    cout << ( 5 & 10 ) << endl;
    
    return 0;
  }