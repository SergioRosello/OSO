#ifndef SELECTION_H
#define SELECTION_H

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

#endif
