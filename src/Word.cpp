#include <algorithm>

#include "../include/Word.h"

using namespace std;

Word::Word(Cell f, Cell l) {
  this->first = f;
  this->last = l;
  this->size = calculateWordSize();
}

int Word::calculateWordSize() {  
  const int width = abs(last.getXCoordinate() - first.getXCoordinate()) + 1;
  const int height = abs(last.getYCoordinate() - first.getYCoordinate()) + 1;
  return max(width, height);
}

Word::~Word() {
}
