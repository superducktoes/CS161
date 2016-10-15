/*******************************************************
 ** Author: Nick Roy
 ** Date: 4/2/2016
 ** Description: Takes an input from the user for a 
 ** tempereature in celsius and converts it to farenheit
 **
 *******************************************************/

#include<iostream>
using namespace std;

int main() {

  double celsius, farenheit;

  cout << "Please enter a Celsius temperature. " << endl;
  cin >> celsius;

  //converts celsius to farenheit
  farenheit = (celsius*9)/5 + 32;

  cout << "The equivalent Farenheit temperature is: " << endl;
  cout << farenheit << endl;

  return 0;
}
