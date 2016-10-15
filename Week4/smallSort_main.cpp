/************************************************************
 ** 
 ** Author: Nick Roy
 ** Date: 4/13/2016
 ** Description: Program takes three ints from user and shows
 ** them sorted for smallest to largest.
 **
 ***********************************************************/

#include<iostream>
using namespace std;

/**********************************************************
 ** smallSort
 ** Description: uses three ints passed by reference and
 ** displays the output from least to greatest.
 *********************************************************/
void smallSort(int &one, int &two, int &three) {

  int small, middle, large;

  //checks if the first number is the smallest
  if (one < two && one < three) {
    small = one;
    if (two < three) {
      middle = two;
      large = three;
    } else {
      large = two;
      middle = three;
    }
  }

  //checks if the second number is the smallest
  if (two < three && two < one) {
    small = two;
    if ( three < one) {
      middle = three;
      large = one;
    } else {
      large = three;
      middle = one;
    }
  }
  //checks if the third number is the smallest
  if (three < one && three < two) {
    small = three;
    if (two < one) {
      middle = two;
      large = one;
    } else {
      large = two;
      middle = one;
    }
  }

  cout << small << "," << middle << "," << large << endl;

}
/*
int main() {
  int one, two, three;
  cout << "Enter three integers: ";
  cin >> one >> two >> three;
  smallSort(one,two,three);
  cout << endl;
  return 0;
}
*/
