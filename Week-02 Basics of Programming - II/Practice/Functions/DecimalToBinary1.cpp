#include<iostream>
using namespace std;

// function to calculate the binary equivalent of a decimal number
long long toBinary( int n ) {
  long long bin = 0;
  int remainder, place = 1;
  while ( n != 0 ) {
    remainder = n%2;
    bin += (remainder*place); 
    place *= 10;
    n /= 2;
  }
  return bin; 
}

int main() {
  int decimal;
  cout << "Enter a number to print its binary equivalent: ";
  cin >> decimal ;
  // Passing the value to function to calculate its binary equivalent 
 // storing in to a variable binary 
 long long binary = toBinary(decimal); // function call
 // prints the binary equivalent 
 cout << decimal << " in Binary is: " << binary << endl;

return 0;
}