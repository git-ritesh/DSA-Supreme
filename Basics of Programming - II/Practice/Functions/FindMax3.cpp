#include<iostream>
using namespace std;

int findMax( int a, int b, int c ) {
  if ( a > b && a > c ) {
    return a;
  }
  else if ( b > a && b > c ) {
    return b;
  }
  else {
    return c;
  }
}
// Program starts here
int main() {
  // variable declaration
  int a, b, c;
  // Input prompt
  cout << "Enter three numbers to find the greatest among them: ";
  // Takes 3 numbers as input
  cin >> a >> b >> c;
  // stores the greatest number
  int max = findMax(a, b, c);
  // prints the greatest number
  cout << "The greatest number among all is: " << max << endl;

return 0;
}