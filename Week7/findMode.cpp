/******************************************************************************
 *
 * Author: Nick Roy
 * Date: 5/8/2016
 * Description: findMode.cpp has one function that takes a list of integers
 * from an array and sorts through to find the count of numbers that occurs
 * most frequently. Uses the number to then find the mode of the list of
 * integers.
 *
 *****************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/******************************************************************************
*
* findMode
* Description: Function that takes an array of ints and the size of the array
* as an int and finds the number or numbers that occur most frequently in the
* set. Returns a vector of the mode or modes of the numbers.
*
*****************************************************************************/

vector<int> findMode(int array[], int size) {
  
  vector<int> mode;
  int tempNumber; //tmp number to be used in comparison
  int modeCounter = 1; //used to find which number appears the most
  int counter;

  for(int i = 0; i < size; i++) {
    tempNumber = array[i];
    counter = 0;
    for(int j = 0; j < size; j++) {
      if(tempNumber == array[j]) {
	counter++;
      }
    }
    if(counter > 1) {
      modeCounter = counter;
    }
  }

  //gets a number that we can use to compate to the rest of the array passed in
  for(int i = 0; i < size; i++) {
    tempNumber = array[i];
    counter = 0;
    for(int j = 0; j < size; j++) {
      if(tempNumber == array[j]) {
	counter++;
      }
    }
    if(counter == modeCounter) {
      mode.push_back(tempNumber);
    }
  }
  
  //sorts and then erases
  sort(mode.begin(),mode.end());
  mode.erase(unique(mode.begin(),mode.end()),mode.end());

  return mode;
}
