#include<iostream>
using namespace std;

  int main() {
    // Case 1
    bool a = true;
    bool b = false;
    // Output of a AND b. 
    cout << ( a ^ b ) << endl;  // Gives 1 as output. coz Diff value then gives 1 

    // Case 2
     a = true;
     b = true;
    // Output of a OR b.
    cout << ( a ^ b ) << endl; // Gives 0 as Output , coz values are same.
    
    // Case 3
     a = false;
     b = false;
     // Output of a OR b
     cout << ( a ^ b ) << endl; // ives 0 as Output , coz values are same.
    return 0;
  }