#include<iostream>
using namespace std;

  int main() {
    int a; 
    // initialized a 
    a = 12;
    // Left Shift a by 1
    a = a << 1; // a = 24
    cout << a << endl;  // Gives output 24 

    a = 12 ;
    a = a << 2; // a = 48
    cout << a << endl;

    a = 12 ;
    a = a << 3; // a = 96
    cout << a << endl;

    a = 12 ;
    a = a << -1; // Garbage value/ Warning 
    cout << a << endl; // Produces Garbage value or Warning

    return 0;
  }