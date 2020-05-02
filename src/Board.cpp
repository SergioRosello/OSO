#include <iostream>
#include <algorithm>

#include "../include/Board.h"

using namespace std;

Board::Board() {}

Board::Board(int columns, int rows, string keyword)
    : columns_(columns), rows_(rows),
      cells_(columns * rows), keyword_(keyword) {}

Board::~Board() {}

void Board::ShowBoard() {
    for (int i = 0; i < cells_.size(); ++i) {
      cout << cells_[i].content() << " ";
      if ((i + 1) % columns_ == 0) {
        cout << endl;
      }
    }
}

Cell Board::GetLetterAt(Coordinates coordinates) {
    return cells_[(coordinates.y * columns_) + coordinates.x];
}

void Board::PlaceLetter(Cell letter) {
    int x = letter.GetXCoordinate();
    int y = letter.GetYCoordinate();
    cells_[(y * columns_) + x] = letter;
}

bool Board::AreCoordinatesValid(int x, int y) {
    return (x >= 0 && x < columns_) && (y >= 0 && y < rows_);
}

string Board::keyword() {
    return keyword_;
}

void Board::set_keyword(string keyword) {
    keyword_ = keyword;
}
