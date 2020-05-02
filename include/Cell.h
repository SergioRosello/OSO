#ifndef CELL_H
#define CELL_H

struct Coordinates {
  int x;
  int y;
  
  Coordinates(int x = -1, int y = -1): x(x), y(y) {}
};

class Cell {
  public:
    Cell();
    Cell(Coordinates coordinates, char content);

    int getXCoordinate(){
      return coordinates.x;
    }

    int getYCoordinate() {
      return coordinates.y;
    }

    char getContent(){
      return content;
    }

    bool operator==(Cell other) const {
      return (coordinates.x == other.coordinates.x) && (coordinates.y == other.coordinates.y);
    }

  private:
    Coordinates coordinates;
    char content;
};

#endif
