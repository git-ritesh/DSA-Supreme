#include<iostream>
using namespace std;
  // Function printName
  void printName() {
    // n - no. of times the name will be printed.
    int n ;
    cout << "Enter the value of n: ";
    cin >> n; // gets numbers as input
    
    for ( int i = 0; i < n; i++) {
      // iterates up to n-1 times
      cout << "Spirit" << endl; // prints name 
    }
  }
int main() {
  
  // cout << "Enter the value of n: ";
  // cin >> n; // takes input
  
  // for ( int i = 0; i < n; i++) {
  //   cout << "Spirit" << endl;
  // }

  // cout << "Enter the value of n: ";
  // cin >> n; // takes input
  
  // for ( int i = 0; i < n; i++) {
  //   cout << "Spirit" << endl;
  // }
  /* The Above Code is bulky, less-readable, less-reusable, inconsistent and redundant and lengthy  */
 // No w let's use the function
 printName(); // function call
return 0;
}