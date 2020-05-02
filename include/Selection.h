#ifndef SELECTION_H_
#define SELECTION_H_

#include "../include/Cell.h"

class Selection {
  public:
    Selection(Cell first, Cell last);
    ~Selection();

    int GetSize();

  private:
    Cell first_;
    Cell last_;
};

#endif  // SELECTION_H_
