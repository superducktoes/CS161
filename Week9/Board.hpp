/*************************************************
 *
 * Author: Nick Roy
 * Date: 5/20/16
 * Description: Header file for Board class
 *
 ************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

class Board {
private:
  int posX, posY;
  char board[4][4];
public:
  enum Status {X_WON, O_WON, DRAW, UNFINISHED};
  
  Board();
  bool makeMove(int,int,char);
  void print();
  int gameState();
  
};
#endif
