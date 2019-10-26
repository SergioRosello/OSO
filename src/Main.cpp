#include <iostream>
#include "../include/Board.h"
#include "../include/Word.h"

int main(){
  Letter letter = Letter(Coordinates(20, 11), 'O');
  Coordinates coordinates = letter.getCoordinates();

  Letter secondLetter = Letter(Coordinates(21, 12), 'S');
  Coordinates secondCoordinates = letter.getCoordinates();

  Letter thirdLetter = Letter(Coordinates(22, 13), 'O');
  Coordinates thidrCoordinates = letter.getCoordinates();

  Word word = Word(letter, thirdLetter);
  std::cout << "Word size: " << word.getSize() << "\n";

  return 0;
}

