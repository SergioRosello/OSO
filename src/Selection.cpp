#include <algorithm>

#include "../include/Selection.h"

using namespace std;

Selection::Selection(Cell first, Cell last) {
  first_ = first;
  last_ = last;
}

Selection::~Selection() {}

int Selection::GetSize() {  
  const int width = abs(last_.GetXCoordinate() - first_.GetXCoordinate()) + 1;
  const int height = abs(last_.GetYCoordinate() - first_.GetYCoordinate()) + 1;
  return max(width, height);
}
