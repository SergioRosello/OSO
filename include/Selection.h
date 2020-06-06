#ifndef SELECTION_H_
#define SELECTION_H_

#include <vector>
#include <string>

#include "../include/Cell.h"

class Selection {
  public:
    Selection();
    ~Selection();

    bool IsAligned();
    bool IsConsecutive();
    bool DoesContainKeyword(std::string keyword);
    void AddCell(Cell cell);

    int size();
    int direction();

  private:
    std::vector<Cell> selection_;
    int direction_ = -1;
    enum Direction {
      kUp,
      kUpRight,
      kRight,
      kDownRight,
      kDown,
      kDownLeft,
      kLeft,
      kUpLeft
    };
};

#endif  // SELECTION_H_
