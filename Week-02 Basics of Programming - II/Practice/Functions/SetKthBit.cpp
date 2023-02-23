#include<iostream>
using namespace std;
// function to setBit of a number
int setBits( int val, int i ) {
  return ((1 << i) | val);
}
int main() {
  int n , i, finalValue;
  cout << "Enter a number: "; 
  cin >> n; 
  cout << "Enter the ith bit: ";
  cin >> i ;
  // value after setting bit 
  finalValue = setBits( n, i);
  cout << "Value after setting the ith bit is: " << finalValue << endl;

return 0;
}