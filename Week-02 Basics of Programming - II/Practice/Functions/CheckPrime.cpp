#include<iostream>
using namespace std;
// function which returns true or false
bool checkPrime( int n ) {
  for ( int i = 2; i < n/2; i++ ){ // if a num is not divisible by any number up to itself then it will also not be divisible by half of itslef i.e. n/2
    // condition to check its divisible by any of no.s b/w 1 and itself.
    if ( n%i == 0){
      return false ;
    }
    else {
      return true ;
    }
  }
}
int main() {
  int num;
  cout << "Enter a number to check its prime or not. ";
  cin >> num ;
  // condition to check prime or not.
  if ( checkPrime(num)){ // function returns boolean value
    cout << num << " is Prime." << endl;
  }  
  else {
    cout << num << " is not Prime." << endl;
  }

return 0;
}