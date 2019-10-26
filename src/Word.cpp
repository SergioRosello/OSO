#include <algorithm>
#include "../include/Word.h"

// Check if the word is valid
// initialise the word
Word::Word(Letter f, Letter l) {
  this->first = f;
  this->last = l;
  this->size = calculateWordSize();
}


// Calculates the height of the word.
// It can only be 1 or 3
// We have to add one because of the substraction. It counts 0
int Word::calculateWordSize() {
  const int height = abs(first.getCoordinates().y - last.getCoordinates().y) + 1;
  const int width = abs(first.getCoordinates().x - last.getCoordinates().x) + 1;
  return std::max(height, width);
}

Word::~Word() {
}
