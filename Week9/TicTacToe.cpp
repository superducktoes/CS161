/***************************************************
 *
 * Author: Nick Roy
 * Date: 5/20/16
 * Description: TicTacToe class. Contains the main 
 * functions for playing the game and taking input
 * from the player.
 *
 *************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include "TicTacToe.hpp"
#include "Board.hpp"

using namespace std;

TicTacToe::TicTacToe(char p) {
  turn = p; //sets who goes first
}

void TicTacToe::play() {
  bool gameOn = true;
  newGame.print();

  do {

    turn = toupper(turn);
    cout << "Your turn player " << turn << endl;
    cout << "\nX Coordinates: ";
    cin >> playerX;
    while(cin.fail()) {
      cout << "Invalid entry" << endl;
      cout << "Please enter a move between 1 and 3: ";
      cin.clear();
      cin.ignore(256,'\n');
      cin >> playerX;
    }
    cout << "Y Coordinates: ";
    cin >> playerY;
    while(cin.fail()) {
      cout << "Invalid entry" << endl;
      cout << "Please enter a move between 1 and 3: ";
      cin.clear();
      cin.ignore(256,'\n');
      cin >> playerY;
    }
      
    int test = newGame.gameState();
   
    if(newGame.makeMove(playerY,playerX,turn) == false) {

      playerY = playerX = ' ';

      do {
        cout << "Invalid move. Please enter coordinates again";
        cout << "\nX Coordinates: ";
        cin >> playerX;
        cout << "Y Coordinates: ";
        cin >> playerY;
      } while (newGame.makeMove(playerY,playerX,turn) == false);
    }

    system("clear");
    turn = tolower(turn); //make it lower case before passing the x or o
    newGame.makeMove(playerY, playerX, turn);
    newGame.print();

    if(turn == 'x') {
      turn = 'o';
    } else {
      turn = 'x';
    } //switches the letter played



    switch(newGame.gameState()) {
    case 0:
      cout << "X wins!" << endl;
      gameOn = false;
      break;
    case 1:
      cout << "O wins!" << endl;
      gameOn = false;
      break;
    case 2:
      cout << "Draw!" << endl;
      gameOn = false;
      break;
    }



  } while (gameOn == true);

}

int main() {

  char first;

  cout << "Is X or O starting first? ";
  cin >> first;

  first = tolower(first);

  if(first != 'x' && first != 'o') {
    cout << "Please enter either X or Y to start first:";
    do {
      cin >> first;
      first = tolower(first);
    } while (first != 'x' && first != 'o');

  }
  system("clear");
  TicTacToe gaming(first);
  gaming.play();

  return 0;
}
