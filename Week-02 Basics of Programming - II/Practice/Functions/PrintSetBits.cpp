// set Bits are those Bits which are 1 in the binary number.
// Program to count and print the total number of setBits in a number. 
#include<iostream>
using namespace std;
// function to calculate setBits 
int getSetBits( int num ) {
  int count = 0; 
  while ( num != 0) { 
    count = count + (num & 1)/*num&1 gives 1 when last bit is 1 and 0 when the bit is zero */;
    num = num >> 1; // shifting one bit to right to remove the last bit.
  }
  /* when all the bits are shifted then the bits filled with zero 
  and form a decimal number 0 
  so in while condition is written that 
  if num != 0 then loop will iterate. */
  return count;
}
// Program starts here
int main() {
  int n ;
  cout << "Enter a number to check it's set Bits: ";
  cin >> n ;
  // stores the setBits
  int setBits = getSetBits(n);
  // displays setBits
  cout << "No. of set bits in " << n << " is : " << setBits << endl;
return 0;
}