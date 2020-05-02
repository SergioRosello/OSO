#include "../include/Cell.h"

Cell::Cell(){
  this->coordinates = Coordinates();
  this->content = '-';
}

Cell::Cell(Coordinates coordinates, char content) {
  this->coordinates = coordinates;
  this->content = content;
}
