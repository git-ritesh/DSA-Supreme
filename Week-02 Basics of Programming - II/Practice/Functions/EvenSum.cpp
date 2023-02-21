#include<iostream>
using namespace std;

// function to evaluate evensum
int evenSum( int n ) {
  int sum = 0;
  for ( int i = 2; i <= n; i=i+2 ) {
    sum += i;
  }
  return sum;
  }

int main() {
  int n; 
  cout << "Enter a no. up to which you want to obtain even sum b/w them: " ;
  cin >> n; // takes number as input
  int sum = evenSum(n);
  cout << "Sum of even no. b/w "<< 1 << " and " << n << " is: " << sum << endl;
return 0;
}