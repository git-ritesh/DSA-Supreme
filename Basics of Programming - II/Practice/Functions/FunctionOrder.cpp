/* You have to atleast declare function above the main function to avoid errors.
or you can define the function above the main() function.*/
#include<iostream>
using namespace std;
// Function declaration
int getSum( int a , int b ); 
// or 
/*
 Function declaration + defintion
 Declaration means atleast fn-return type, name & input parameters should be present.
int getSum(int a, int b) 
{
  int result = a + b;
  return result;
}
*/

int main() {
  int num1, num2; 
  cout << "Enter two numbers to add: ";
  cin >> num1 >> num2;
  // sum function to store the value returned from getSum function
  int sumResult = getSum(num1,num2); // function call 
  cout << "Result of Addition of "<< num1 << " and " << num2 << " is " << sumResult << endl;

return 0;
}
// This is the 2nd way to define a function below the main but we have to write a declaration above the main function.
// function definition
int getSum(int a, int b) 
{
  int result = a + b;
  return result;
}