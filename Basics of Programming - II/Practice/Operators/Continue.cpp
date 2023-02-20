#include<iostream>
using namespace std;

  int main() {
    // Let's use continue keyword 
    for ( int i = 0; i < 5; i++ ) {
    // Continue is used to skip the iteration
    continue; // This will skip the iteration when used. So Babbar will be printed only once.
    // Anything after continue will not be executed in the loop.
    cout << "Babbar"<< endl; 
    }
    cout << "Love" << endl;
  return 0;
  }