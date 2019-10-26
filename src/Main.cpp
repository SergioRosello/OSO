#include <iostream>
#include "../include/Board.h"
#include "../include/Word.h"

int main(){
  Letter letter = Letter(Coordinates(20, 11), 'O');

  Letter secondLetter = Letter(Coordinates(21, 12), 'S');

  Letter thirdLetter = Letter(Coordinates(22, 13), 'O');

  Word word = Word(letter, thirdLetter);
  std::cout << "Word size: " << word.getSize() << "\n";

  return 0;
}

