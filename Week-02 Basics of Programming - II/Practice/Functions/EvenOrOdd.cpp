#include<iostream>
using namespace std;

bool evenOdd( int num ) {
  if ( /*num%2 == 0*/ (num&1) == 0)
    return true;
  else 
    return false;
}
// Program start here
int main() {
  int n;
  cout << "Enter a no. to check Even Or Odd: ";
  cin >> n ;
  if(evenOdd(n)) {
    cout << n << " is Even.";
  }
  else {
    cout << n << " is Odd.";
  }

return 0;
}