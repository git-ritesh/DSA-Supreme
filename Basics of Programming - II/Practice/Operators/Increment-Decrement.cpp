#include <iostream>
using namespace std;

int main()
{
  int a = 11;
  // Increment Operator

  // prints initial value
  cout << a << endl;

  // Now print the pre-increment i.e. ++a
  cout << ++a << endl; // Increments a then prints it.

  // Case I Pre-increment
  a = 6;
  int c = ++a + 1;
  cout << c << endl; // Output = 8 ( 6 increments and becomes7 and after adding 1 it becomes 8)

  // Case II Post-Increment
  a = 6;
  c = a++ + 1;
  cout << c << endl; // // Output = 21 ( First 6 is used and added with 1 and stored in c and then incremented by 1.)

  // Decrement Operator
  a = 6;
  // prints initial value of a
  cout << a << endl;

  // Now print the pre-decrement i.e. ++a
  cout << --a << endl; // Decrement "a" then prints it.

  // Case I Pre-Decrement
  a = 6;
  c = --a - 1;
  cout << c << endl; // Output = 8 ( 6 increments and becomes7 and after adding 1 it becomes 8)

  // Case II Post-Decrement
  a = 6;
  c = a-- - 1;
  cout << c << endl; // // Output = 21 ( First 6 is used and added with 1 and stored in c and then incremented by 1.)

  a = 3;
  int b = 4;
  c = (--a) * (b++) ; // 2 x 4 = 8
  cout << c << endl;

  a = 5 ;
  cout << (++a) * (++a) << endl; // Output = 49

  return 0;
}