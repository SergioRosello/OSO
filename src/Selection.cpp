#include <algorithm>
#include <iostream>

#include "../include/Selection.h"

using namespace std;

Selection::Selection() {}

Selection::~Selection() {}

void Selection::AddCell(Cell cell) {
  selection_.push_back(cell);
}

bool Selection::IsAligned() {
    bool areAligned = true;
    if(!(selection_[0].GetXCoordinate() == selection_[1].GetXCoordinate()
        && selection_[1].GetXCoordinate() == selection_[2].GetXCoordinate())
    && !(selection_[0].GetYCoordinate() == selection_[1].GetYCoordinate()
        && selection_[1].GetYCoordinate() == selection_[2].GetYCoordinate())) {
            float ratio1 = (float)(selection_[1].GetXCoordinate() - selection_[0].GetXCoordinate()) / (selection_[2].GetXCoordinate() - selection_[1].GetXCoordinate());
            float ratio2 = (float)(selection_[1].GetYCoordinate() - selection_[0].GetYCoordinate()) / (selection_[2].GetYCoordinate() - selection_[1].GetYCoordinate());
            areAligned = ratio1 == ratio2;
    }
    return areAligned;
}

bool Selection::IsConsecutive() {
    return ((selection_[1].GetXCoordinate() == selection_[0].GetXCoordinate() + 1)
            && (selection_[2].GetXCoordinate() == selection_[0].GetXCoordinate() + 2))
            || ((selection_[1].GetYCoordinate() == selection_[0].GetYCoordinate() + 1)
            && (selection_[2].GetYCoordinate() == selection_[0].GetYCoordinate() + 2));
}

bool Selection::DoesContainKeyword(string keyword) {
    bool containsKeyword = true;
    for (size_t i = 0; i < keyword.size(); i++)
    {
        if (selection_[i].content() != keyword[i]) {
            containsKeyword = false;
        } 
    }
    return containsKeyword;
}

int Selection::size() {
  return selection_.size();
}

int Selection::direction() {
  if (direction_ == -1) {
    int xDelta = selection_[1].GetXCoordinate() - selection_[0].GetXCoordinate();
    int yDelta = selection_[1].GetYCoordinate() - selection_[0].GetYCoordinate();

    if (xDelta == 0 && yDelta > 0) {
      direction_ = Direction::kUp;
    } else if (xDelta == 0 && yDelta < 0) {
      direction_ = Direction::kDown;
    }

    if (yDelta == 0 && xDelta > 0) {
      direction_ = Direction::kRight;
    } else if (yDelta == 0 && xDelta < 0) {
    direction_ = Direction::kLeft;
    }

    if (yDelta > 0 && xDelta > 0) {
      direction_ = Direction::kUpRight;
    } else if (yDelta < 0 && xDelta > 0) {
      direction_ = Direction::kDownRight;
    }

    if (yDelta < 0 && xDelta < 0) {
      direction_ = Direction::kDownLeft;
    } else if (yDelta > 0 && xDelta < 0) {
      direction_ = Direction::kUpLeft;
    }
  }

  return direction_;
}
