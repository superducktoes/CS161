/*********************************************************
 **
 ** Author: Nick Roy
 ** Date: 4/13/2016
 ** Description: Program takes input for a starting number 
 ** and divides an even number by 2 or multiplies an odd 
 ** number by 3 and adds 1. The program continues applying
 ** these rules until the number reaches one and outputs 
 ** the number of steps it takes to get to 1.
 **
 ********************************************************/

#include <iostream>
using namespace std;

/********************************************************
 ** hailstone
 ** Description: function is passed an int that is either
 ** even or odd. If even it is divided by 2 and if odd it
 ** is multiplied by 3 and added 1 to it. Also increments 
 ** the counter by 1 until the value passed in reaches 1.
 **
 ** If an int of 1 is passed to the function it
 ** automatically returns a 1;
 **
 *******************************************************/
int hailstone(int number) {

  //used for keeping track of how many steps it takes to get a number to zero.
  int steps = 0;
  string deleteMe;

  if(number == 1) {
    return 0;
  } //returns 0 if the user enters 1

  do {
    if ( number % 2 == 0 ) { // even numbers
      number = number/2;
      steps++;
    } else if (number % 2 == 1) { //odd numbers
      number = (number * 3) + 1;
      steps++;
    }
  } while (number != 1);

  return steps;
}



/*
int main() {
  int number, numberOfTimes;
  cout << "Enter a starting number for hailstorm: ";
  cin >> number;
  numberOfTimes = hailstone(number);
  cout << "The final step count is: " << numberOfTimes << endl;
  return 0;
}
*/
