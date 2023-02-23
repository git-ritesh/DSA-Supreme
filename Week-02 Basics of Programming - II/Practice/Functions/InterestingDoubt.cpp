#include<iostream>
using namespace std;

int main() {
  char ch = 96;
  ch <<= 1; // comment this if you execute line 8
  cout << int(ch) << endl; // comment this if you execute line 8
  // The above and the below will have diff. output even if we've dont same thing.
  // cout << int(ch<<1) << endl;
return 0; 
}
// -128 -> 0 There exists some extra ASCII characters which are same as 128 to 288 in unsigned char. 