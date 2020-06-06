#ifndef BOARD_H_
#define BOARD_H_

#include <string>
#include <vector>

#include "Cell.h"
#include "Selection.h"

class Board{
  public:
    Board();
    Board(int columns, int rows, std::string keyword);
    ~Board();

    void ShowBoard();
    Cell GetLetterAt(Coordinates coordinates);
    void PlaceLetter(Coordinates coords, char content);
    bool AreCoordinatesValid(int x, int y);
    bool IsSelectionValid(Selection selection);

    std::string keyword();
    void set_keyword(std::string keyword);

    Cell &operator() (int column, int row) {
      return cells_[(row * columns_) + column];
    }

  private:
    int columns_;
    int rows_;
    std::vector<Cell> cells_;
    std::string keyword_;
};

#endif  // BOARD_H_
