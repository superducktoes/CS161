/********************************************************
 ** Author: Nick Roy
 ** Date: 4/2/2016
 ** Description: Takes the users input of 5 numbers and
 ** returns the average of the five numbers
 **
 *******************************************************/

#include<iostream>
using namespace std;

int main() {
  
  double num1,num2,num3,num4,num5; //user input numbers
  double average;

  cout << "Please enter five numbers. " << endl;
  
  cin >> num1 >> num2 >> num3 >> num4 >> num5;
  
  //gets the average of the five numbers
  average = (num1+num2+num3+num4+num5)/5;
  
  cout << "The average of those numbers is: " << endl;
  cout << average << endl;


  return 0;
}
