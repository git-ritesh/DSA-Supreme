#include<iostream>
#include<math.h>
using namespace std;
// function to convert the decimal to binary 
int decimalToBinary(int n) {
  int binaryno = 0 , i = 0; 

  while( n > 0 ) {
    // Division Method
    int bit = n % 2;
    binaryno = bit*pow(10,i++) + binaryno ;
    n = n / 2 ; 
  }
  return binaryno; 
}
int main() {
  
  int decimal ; 
  cout << "Enter a number to display it's Binary Equivalent: ";
  cin >> decimal; // takes decimal number input from the user

  //  storing the binary value in the binary and displaying
  int binary =  decimalToBinary(decimal);
  cout << decimal << " in binary is: " << binary << endl; 
return 0;
}
