/*********************************************************
 **
 ** Author: Nick Roy
 ** Date: 4/13/2016
 ** Description: Program takes the input from the user 
 ** in the form of time in seconds and shows the distance
 ** the object fell in meters.
 **
 *********************************************************/

#include <iostream>
using namespace std;

/********************************************************
 ** fallDistance
 ** Description: Takes a double and returns a double that 
 ** is the time double multiplied by itself.
 ********************************************************/
 
double fallDistance(double time) {

  time = time*time;
  return time;
}

int main() {
  double distance, time;
  const double GRAVITY = 9.8;
  cout << "Enter the time that the object has been falling in seconds: ";
  cin >> time;
  time = fallDistance(time);
  distance = (GRAVITY*time)/2;
  cout << "The distance fallen in meters is: " << distance << endl;
  return 0;
}
