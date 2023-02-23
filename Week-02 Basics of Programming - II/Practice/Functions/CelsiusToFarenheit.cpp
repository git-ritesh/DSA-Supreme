#include<iostream>
using namespace std;
// function to convert celsius into Farenheit
float toFarenheit( int c ) {
  return ((c*9/5)+32);
}
// Program starts here
int main() {
  float F, C; // F = Farenheit C = celsius
  cout << "Enter the degree in Celsius to convert it into Farenheit: ";
  cin >> C; // Takes Farenheit as the input
  
  F = toFarenheit(C);
  cout << C << " in Farenheit is: " << F << endl;
return 0;
}