/*********************************************
 *
 * Author: Nick Roy
 * Date: 5/20/16
 * Description: Class file for TicTacToe class
 *
 **********************************************/
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include "Board.hpp"

class TicTacToe {
private:
  Board newGame;
  char turn;
  int playerX, playerY;
public:
  TicTacToe(char);
  void play();
}; 
#endif
