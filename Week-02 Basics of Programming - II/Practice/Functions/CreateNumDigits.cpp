#include<iostream>
using namespace std;

int getNum( int n ) {
  int num = 0;
  for ( int i = 1; i <= n; i++ ) {
    int digit ;
    cout << "Enter the digit: ";
    cin >> digit;
    num = num * 10 + digit; 
  }
  return num ;
}
int main() {
  int digiNum; // Number of digits
  cout << "Enter no. of Digits: ";
  cin >> digiNum; // takes no. of digit as input to form numbbers
  // function to generate a number from digits
  cout << getNum(digiNum);
return 0;
}