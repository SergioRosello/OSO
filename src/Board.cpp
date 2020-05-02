#include <iostream>
#include <algorithm>

#include "../include/Board.h"

using namespace std;

Board::Board() {}

Board::Board(int columns, int rows, string keyword)
    : columns(columns), rows(rows), cells(columns * rows), keyword(keyword) {}

void Board::printBoard() {
    for(int i = 0; i < cells.size(); ++i){
      cout << cells[i].getContent() << " ";
      if ((i + 1) % columns == 0) {
        cout << endl;
      }
    }
}

void Board::initialize(){
  fill(cells.begin(), cells.end(), Cell());
}

string Board::getKeyword() {
    return this->keyword;
}

void Board::setKeyword(string keyword) {
    this->keyword = keyword;
}

bool Board::areCoordinatesValid(int x, int y) {
    return (x >= 0 && x < columns) && (y >= 0 && y < rows);
}

void Board::placeLetter(Cell letter) {
    int x = letter.getXCoordinate();
    int y = letter.getYCoordinate();
    cells[(y * columns) + x] = letter;
}

Cell Board::getLetterAt(Coordinates coordinates) {
    return cells[(coordinates.y * columns) + coordinates.x];
}

Board::~Board() {}
