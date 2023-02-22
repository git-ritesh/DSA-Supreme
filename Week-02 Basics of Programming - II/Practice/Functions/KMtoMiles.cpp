#include<iostream>
using namespace std;
// Function to convert KM to miles 
float toMiles( int km ) {
  const float milePerKm = 0.621371;
  return km*milePerKm; 
}
int main() {
  int km;
  float miles; 
  cout << "============= Converts Distance into Miles =============" << endl;
  cout << "Enter the Distance in KMs : " ;
  cin >> km ; // Takes the distance input in Kilometres
  // gets the Miles unit 
  miles = toMiles(km); // function call
  // displays result
  cout << km << " KM = " << miles << " Mile" << endl;

return 0;
}