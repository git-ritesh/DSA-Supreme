#include<iostream>
using namespace std;
 // Note :- We can't use continue inside a switch case if that switch is not inside a loop.
int main() {
  // Day no.
  int day;
  cout << "Enter the value: ";
  cin >> day ;
  // Switch Case
  switch (day) {
    // Cases
    case 1:
    cout << "Monday" << endl;
    break;

    case 2: 
    cout << "Tuesday" << endl;
    break;

    case 3: 
    cout << "Wednesday" << endl;
    break;

    case 4: 
    cout << "Thursday" << endl;
    break;

    case 5: 
    cout << "Friday" << endl;
    break;
    
    case 6: 
    cout << "Saturday" << endl;
    break;

    case 7: 
    cout << "Sunday" << endl;
    break;

    default:
    cout << "Invalid Day Number" << endl;

  } // End of Switch 

  return 0;
}