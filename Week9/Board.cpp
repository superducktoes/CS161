/********************************************************
 * Author: Nick Roy
 * Date: 5/20/16
 * Description: Board class. Initializes the board
 * takes an x,y coordinate to place a move, and 
 * evaluates the game to see if there is a win or
 * a draw.
 * 
 *******************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include "Board.hpp"

using namespace std;

Board::Board() {
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      board[i][j] = '.';//initializes and sets up the board
    }
  }
  board[0][1] = '1';
  board[0][2] = '2';
  board[0][3] = '3';
  board[0][0] = ' ';
  board[1][0] = '1';
  board[2][0] = '2';
  board[3][0] = '3';//sets the numbers on the board
}

bool Board::makeMove(int x, int y, char c) {
  posX = x;
  posY = y;
  c = tolower(c);

  if((board[posX][posY] == '.') && (board[posX][posY] <= 3 || board[posX][posY] >= 1)) {
    board[posX][posY] = c;
    return true;
  } else {
    return false; //returns false if not inside the square or if a letter is already there.
  }
}


void Board::print() {
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

int Board::gameState() {

  Status gameStatus = DRAW;

  for(int row = 1; row < 4; row++) {
    if(board[row][1] != '.') {
      if(board[row][1] == board[row][2] && board[row][2] == board[row][3]) {
        if(board[row][1] == 'x') {
          gameStatus = X_WON;
        } else {
          gameStatus = O_WON;
        }
      }
    }
  }//closes checking the rows for winning moves

  for(int column = 1; column < 4; column++) {
    if(board[1][column] != '.') {
      if(board[1][column] == board[2][column] && board[2][column] == board[3][column]) {
        if(board[1][column] == 'x') {
          gameStatus = X_WON;
        } else {
          gameStatus = O_WON;
        }
      }
    }
  }//closes checking the columns for winning moves

  //still need to check for diagonals
  if(board[2][2] != '.') {
    if(board[1][1] == board[2][2] && board[2][2] == board[3][3]) {
      if(board[1][1] == 'x') {
        gameStatus = X_WON;
      } else {
        gameStatus = O_WON;
      }
    } else if(board[3][1] == board[2][2] && board[1][3] == board[2][2]) {
      if(board[3][1] == 'x') {
        gameStatus = X_WON;
      } else {
        gameStatus = O_WON;
      }
    }
  }

  if(gameStatus == DRAW) {
    for(int row = 1; row < 4; row++) {
      for(int column = 1; column < 4; column++) {
        if(board[row][column] == '.') {
          gameStatus = UNFINISHED;
        }
      }
    }
  }


  return gameStatus;
}
