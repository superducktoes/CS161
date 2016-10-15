/******************************************************************************
 * Author: Nick Roy
 * Date: 4/9/2016
 * Description: Program takes the user input for number of integers to find 
 * a min and max number for a list of integers entered. Program loops through
 * the numbers entered and compares them to the previous numbers and updates 
 * the min and max integers.
 *
 * Sample data generated for tested with the following:
 * https://www.random.org/integers/?num=10&min=-10000&max=10000&col=1&base=10
 * &format=plain&rnd=new
 *
 *****************************************************************************/

#include <iostream>
using namespace std;

int main() {

  int totalIntegers;
  int max = 0;
  int min = 0;
  int userNumber;

  cout << "How many integers would you like to enter? ";
  cin >> totalIntegers;

  cout << "Please enter " << totalIntegers << " integers. " << endl;

  cin >> userNumber;
  //sets min and max to the users first input for the rest of the comparison
  min = userNumber;
  max = userNumber;

  for(int i = 0; i < totalIntegers-1; i++) {

    cin >> userNumber;

    /* Loops through and compares the number entered to the previous number.
     * If the number is greater or less than the previous number either the
     * min or max variable is updated. */

    if ( userNumber > max) {
      max = userNumber;
    } else if (userNumber < min) {
      min = userNumber;
    }

  }

  // Displays the final min and max number entered.
  cout << "min: " << min << endl;
  cout << "max: " << max << endl;

  return 0;
}
