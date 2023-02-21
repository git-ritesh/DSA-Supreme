#include<iostream>
using namespace std;
// factorial function
int findFactorial( int num ) {
  int result = 1;
  for ( int i = 1; i <= num; i++ ) {
    result *= i;
  }
  return result;
}
// Program starts here
int main() {
  int n ;
  cout << "Enter a number to find its Factorial: ";
  cin >> n ;
  // stores the factorial
  int fact = findFactorial(n); 
  // displays factorial
  cout << "Factorial of " << n << " is "<< fact << endl;
  
return 0;
}