/*Students Grade Calculator using switch case statements*/
#include<iostream>
using namespace std;

// function declaration
char getGrade( int marks ) {
  switch (marks/10) {// Assuming marks between 0 to 100.
  case 10:
    return 'A';
    break;
  
  case 9:
    return 'A';
    break;

  case 8:
    return 'B';
    break;

  case 7:
    return 'C';
    break;

  case 6:
    return 'D';
    break;

  default:
  return 'F';
    break;
  }
}
int main() {
   // marks variable declaration
  int marks;
  cout << "Enter your Marks: ";
  // takes marks as input from user
  cin >> marks;
  // Passing marks to getGrade function to find the Grade and store the result in a char variable.
  char finalGrade = getGrade(marks);
  // prints the Grade
  cout << "Your Grade is: " << finalGrade << endl;

return 0;
}