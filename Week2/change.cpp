/*********************************************************
 ** Author: Nick Roy
 ** Date: 4/2/2016
 ** Description: Gets the amount of cents a user has and 
 ** shows how many coins make up the total. Starts with
 ** quarters first and works down to smaller denominations
 ** from there.
 ** 
 *********************************************************/

#include <iostream>
using namespace std;

int main() {

  int cents;
  int pennies, nickels, dimes, quarters;

  cout << "Please enter an amount in cents less than a dollar. ";
  cin >> cents;
  
  quarters = cents / 25;
  cout << "Q: " << quarters << endl;;
  
  //removes the quarters
  cents = cents - (quarters*25);

 
  dimes = cents/10;
  cout << "D: " << dimes << endl;
  //removes the dimes from the change
  cents = cents - (dimes*10);


  nickels = cents/5;
  cout << "N: " << nickels << endl;
  
  //updates the change to remove the nickels
  cents = cents - (nickels*5);

  //all that's left is less than 5 cents so we'll show just the pennies
  cout << "P: " << cents << endl;
  return 0;
}
