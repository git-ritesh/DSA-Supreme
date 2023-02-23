#include<iostream>
using namespace std;
// Ternary Operator - ?
// Syntax (condition)?True:False;
int main() {
  int age ; 
  cout << "Enter your Age: ";
  cin >> age ;
  // string variable for storing the output 
  string result = age>18?"You can vote":"You can't vote"; 
  cout << result;
return 0;
}