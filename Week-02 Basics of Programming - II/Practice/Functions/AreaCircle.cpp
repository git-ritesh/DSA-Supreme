#include<iostream>
using namespace std;

// function to display the area of circle
  int areaCircle( int r ) {
    int area = 3.14*r*r ;
    return area;
  }

int main() {
  int radius;
  cout << "Enter the radius of the circle to find its area: ";
  cin >> radius ; // takes input radius
  // stores the area of Circle
  int area = areaCircle(radius);
  cout << "Area of circle is: " << area << endl;
return 0;
}
