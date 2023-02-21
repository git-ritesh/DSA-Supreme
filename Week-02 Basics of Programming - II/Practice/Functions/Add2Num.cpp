#include<iostream>
using namespace std;
// adds two numbers
int getSum(int a, int b) {
  int result = a + b;
  return result;
}
int main() {
  int num1, num2; 
  cout << "Enter two numbers to add: ";
  cin >> num1 >> num2;
  // sum function to store the value returned from getSum function
  int sumResult = getSum(num1,num2); // function call 
  cout << "Result of Addition of "<< num1 << " and " << num2 << " is " << sumResult << endl;

return 0;
}