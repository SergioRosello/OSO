#ifndef CELL_H
#define CELL_H

struct Coordinates {
  int x;
  int y;
  
  Coordinates(int x = -1, int y = -1);
};

class Cell {
  public:
    Cell();
    Cell(Coordinates coordinates, char content);
    bool operator==(Cell other) const;
    ~Cell();

    int GetXCoordinate();
    int GetYCoordinate();

    char content();

  private:
    Coordinates coordinates_;
    char content_;
};

#endif
