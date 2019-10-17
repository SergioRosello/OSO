#include <iostream>
#include "../include/Board.h"
#include "../include/Letter.h"

int main(){
  Board board = Board(10, 10);
  board.initialize();
  board.printBoard();

  Letter letter = Letter(Coordinates(20, 10), 'O');
  Coordinates coordinates = letter.getCoordinates();

  std::cout << coordinates.x << " " << coordinates.y << "\n";

  return 0;
}

