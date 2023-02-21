#include<iostream>
using namespace std;
// prints the number
  int printNum(int num) { 
    // Here num is the copy of actual num stored at a different address from original num.
    cout << num << endl;
    num++;
    cout << num << endl;
    return 0;
  }
int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num ; // takes a number input
  num++;  
  ++num; 
  cout << num << endl; 
  printNum(num);
  --num;
  cout << num << endl;
return 0;
}