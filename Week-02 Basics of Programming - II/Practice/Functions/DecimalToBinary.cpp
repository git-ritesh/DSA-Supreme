#include<iostream>
#include<math.h>
using namespace std;

// Division Method to convert the Decimal into Binary 
int decimalToBinaryMethod1(int n) {
  int binaryValue = 0 , i = 0; 
  while( n > 0 ) {
    // Division Method
    int bit = n % 2;
    binaryValue = bit*pow(10,i++) + binaryValue ;
    n = n / 2 ; 
  }
  return binaryValue; 
} // Function end 

// Bitwise Method to convert the Decimal into Binary
int decimalToBinaryMethod2( int n ) {
  int binaryValue = 0, i = 0;
  while( n > 0 ) {
    // Bitwise Method
    int bit = n & 1;
    binaryValue = bit*pow(10,i++) + binaryValue ;
    n = n / 2 ; 
  }
  return binaryValue;
} // Function end 

// Program starts here.
int main() {
  
  int decimal ; 
  cout << "Enter a number to display it's Binary Equivalent: ";
  cin >> decimal; // takes decimal number input from the user

  //  storing the binary value in the binary and displaying
  // int binary =  decimalToBinaryMethod1(decimal); // Division Method -> Slower
  int binary =  decimalToBinaryMethod2(decimal);    // Bitwise Method -> Faster
  cout << decimal << " in binary is: " << binary << endl; 
return 0;
} 
