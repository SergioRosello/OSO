#ifndef BOARD_H
#define BOARD_H

#include <string>
#include "Letter.h"

class Board{

  public:
    int **board;
    Board(){}
    Board(int row, int column, std::string keyword);
    ~Board();
    int initialize();
    void printBoard();
    std::string getKeyword();
    void setKeyword(std::string keyword);
    void placeLetter(Letter letter);

  private:
    int row;
    int column;
    std::string keyword;
};

#endif
