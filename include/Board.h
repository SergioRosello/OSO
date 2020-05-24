#ifndef BOARD_H_
#define BOARD_H_

#include <string>
#include <vector>

#include "Cell.h"

class Board{
  public:
    Board();
    Board(int columns, int rows, std::string keyword);
    ~Board();

    void ShowBoard();
    Cell GetLetterAt(Coordinates coordinates);
    void PlaceLetter(Coordinates coords, char content);
    bool AreCoordinatesValid(int x, int y);
    bool IsSelectionValid(std::vector<Cell> selection);

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

    bool IsSelectionAligned(std::vector<Cell> selection);
    bool IsSelectionConsecutive(std::vector<Cell> selection);
    bool DoesSelectionContainsKeyword(std::vector<Cell> selection);
};

#endif  // BOARD_H_
