/* Students Grade Calculator using conditionals */
#include<iostream>
using namespace std;

// function declaration
char getGrade( int marks ) {
  // conditions to check the grade
  if ( marks >= 90 )
    return 'A';
  else if ( marks >= 80 )
    return 'B';
  else if ( marks >= 70 )
    return 'C';
  else if ( marks >= 60 )
    return 'D';
  else 
    return 'F';
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