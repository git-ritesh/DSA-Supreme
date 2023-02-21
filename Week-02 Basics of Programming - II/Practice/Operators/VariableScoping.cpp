#include<iostream>
using namespace std;

int main() {
  int a ;
  // Global Scope
  int b = 5; 
  // updation
  b = 10;
  // int b = 10; //it will produce an error " redeclaration of 'int b' "
  int raja = 420;
  // Variable scope is main 
  cout << b << endl;
  cout << raja << endl;

  if ( true ) {
    // local scope
    int b = 15; // Scope of this b is only inside the if block { } outside declaration of b is different from this b.
    int raja = 421;
    // variable scope is inside the if block only
    cout << b << endl;
    cout << raja << endl;
  }

  return 0;
}