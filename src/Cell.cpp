#include "../include/Cell.h"

Coordinates::Coordinates(int x, int y): x(x), y(y) {}

Cell::Cell() {
  coordinates_ = Coordinates();
  content_ = '-';
}

Cell::Cell(Coordinates coords, char cont) {
  coordinates_ = coords;
  content_ = cont;
}

Cell::~Cell() {}

bool Cell::operator==(Cell other) const {
  return (coordinates_.x == other.coordinates_.x)
      && (coordinates_.y == other.coordinates_.y);
}

int Cell::GetXCoordinate() {
  return coordinates_.x;
}

int Cell::GetYCoordinate() {
  return coordinates_.y;
}

char Cell::content() {
  return content_;
}
