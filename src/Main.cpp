#include <iostream>
#include "../include/Board.h"

int main(){
  Board board = Board(10, 10);
  board.initialize();
  board.printBoard();

  return 0;
}

