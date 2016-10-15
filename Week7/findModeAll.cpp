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

vector<int> findMode(int array[], int size);

int main() {
  
  const int SIZE = 50;
  int array[SIZE] = {10, -8, -10, 12, -14,
		     -8, -12, -10, -9, 5,
		     -3, -13, 12, 20, 0,
		     -3, 18, 19, -15, -13,
		     -10, 14, 16, 18, -14,
		     0, -1, 16, -17, 15,
		     -1, 18, -12, 14, 12,
		     9, -18, 1, -13, -10,
		     -17, -20, -5, -2, -10,
		     19, 18, 7, 5, 17};

  for(int i = 0; i < SIZE; i++) {
    cout << array[i] << " ";
  }
  vector<int> mode;
  
  mode = findMode(array, SIZE);

  cout << "\nThe mode is: ";
  for(int i = 0; i < mode.size(); i++) {
    cout << mode[i] << " ";
  }

  cout << endl;

  return 0;
}

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
