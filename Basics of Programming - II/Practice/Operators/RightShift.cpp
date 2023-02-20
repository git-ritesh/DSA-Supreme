#include<iostream>
using namespace std;

  int main() {
    int a; 
    // initialized a 
    a = 12;
    // Right Shift a by 1
    a = a >> 1; // a = 6
    cout << a << endl;  // Gives output 24 

    a = 12 ;
    a = a >> 2; // a = 3
    cout << a << endl;

    a = 12 ;
    a = a >> 3; // a = 1
    cout << a << endl;

    a = -13 ; 
    a = a >> 1; 
    cout << a << endl; // Produces Garbage value or Warning

    return 0;
  }