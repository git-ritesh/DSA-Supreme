#include<iostream>
using namespace std;
// prints Prime numbers
void printPrime( int n ) {
  for ( int i = 2; i < n; i++ ) {
    bool flag = true;
    for ( int j = 2; j < i; j++ ) {
      // This loops check for each value of i is prime or not.
      if ( i%j == 0) {
        flag = false;
        break;
    }
  } // inner loop end 
    // condition to check i is prime or not.
    if (flag) { 
      cout << i << " "; // prints all the prime numbers.
    }
  }
}
// program starts here
int main() {
  int N;
  cout << "Enter a number N to print all prime number b/w 1 to N: ";
  cin >> N; // takes a number input
  cout << "All Prime Numbers between 1 to N are : ";
  // function call
  printPrime(N);
  return 0;
}