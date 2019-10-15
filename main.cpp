#include <iostream>
#include "board.h"

int main(){
  Board board = Board(10, 10);
  board.initialize();
  board.printBoard();

  return 0;
}

