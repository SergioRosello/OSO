#ifndef CELL_H_
#define CELL_H_

struct Coordinates {
  int x;
  int y;
  explicit Coordinates(int x = -1, int y = -1);
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

#endif  // CELL_H_
