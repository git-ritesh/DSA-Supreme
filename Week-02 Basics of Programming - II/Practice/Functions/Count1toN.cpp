#include<iostream>
using namespace std;

// function definition
void printCount( int n ) {
  for ( int i = 1; i <= n; i++ ) {
    cout << i << " ";
  }
}

int main() {
  int n;
  cout << "Enter a number up to which you want to count: ";
  cin >> n;
  printCount(n); // function call

return 0;
}