#ifndef BOARD_H
#define BOARD_H

#include <string>

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

  private:
    int row;
    int column;
    std::string keyword;
};

#endif
