#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <vector>

#include "Cell.h"

class Board{

  public:
    Board();
    Board(int columns, int rows, std::string keyword);
    ~Board();

    void initialize();
    void printBoard();
    std::string getKeyword();
    void setKeyword(std::string keyword);
    bool areCoordinatesValid(int x, int y);
    void placeLetter(Cell letter);
    Cell getLetterAt(Coordinates coordinates);
    bool isSelectionValid(std::vector<Cell> selection);

    Cell &operator() (int column, int row) {
      return cells[(row * columns) + column];
    }

  private:
    int columns;
    int rows;
    std::vector<Cell> cells;
    std::string keyword;
};

#endif
