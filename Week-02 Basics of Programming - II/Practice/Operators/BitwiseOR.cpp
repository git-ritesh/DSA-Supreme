#include<iostream>
using namespace std;

  int main() {
    // Case 1
    bool a = true;
    bool b = false;
    // Output of a AND b. 
    cout << ( a | b ) << endl;

    // Case 2
     a = true;
     b = true;
    // Output of a OR b.
    cout << ( a | b ) << endl;
    
    // Case 3
     a = false;
     b = false;
     // Output of a OR b
     cout << ( a | b ) << endl; 
    return 0;
  }