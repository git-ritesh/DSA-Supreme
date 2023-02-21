#include<iostream>
using namespace std;

void printDigits( int n ){
  // loop to print digits
  while(n!=0){
    int digit = n%10; // calculates each digit 
    cout << digit << ", "; 
    n /= 10; // divides numbeer by 10 to remove a digit each time
  }
}
// Program starts here
int main() {
  int num; 
  cout << "Enter a number: "; 
  cin >> num ;
  // function call 
  printDigits(num);
  
return 0;
}     