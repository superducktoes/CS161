/******************************************************************************
 * Author: Nick Roy
 * Date: 4/9/2016
 * Description: Prompts the user for a number which a player has to guess.
 * The player is then provided feedback based on whether the number they
 * guessed is too low or high.
 * Once the player has guessed the correct number they are told that they
 * guessed it and informed how many tried it took them.
 *
 *****************************************************************************/
#include <iostream>
using namespace std;

int main() {

  int numberToGuess;
  int userGuess;
  int counter;

  cout << "Enter the number for the player to guess. " << endl;
  cin >> numberToGuess;

  cout << "Enter your guess. " << endl;
  cin >> userGuess;

  do {
    counter++;
    if (userGuess > numberToGuess) {
      cout << "Too high - try again. " << endl;
      cin >> userGuess;
    } else if (userGuess < numberToGuess) {
      cout << "Too low - try again. " << endl;
      cin >> userGuess;
    }
  } while (userGuess != numberToGuess);
  
  // adds one to the counter  for the final guess that breaks the loop
  cout << "You guessed it in " << ++counter << " tries." << endl;

  return 0;
}
