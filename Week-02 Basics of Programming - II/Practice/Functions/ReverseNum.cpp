#include<iostream>
using namespace std;
// Function to reverse digits
int getReverse( int num ) {
  int reverse = 0, remainder;
  while ( num != 0 ) {
    remainder = num % 10;
    reverse = reverse*10 + remainder;
    num /= 10;
  }
  return reverse;
}
int main() {
  int number; 
  cout << "Enter a number to reverse its digits: ";
  cin >> number;
  int reverse = getReverse(number);
  cout << "Reverse of " << number << " is: " << reverse << endl;
  
return 0;
}