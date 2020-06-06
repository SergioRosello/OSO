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

void Board::PlaceLetter(Coordinates coords, char content) {
    cells_[(coords.y * columns_) + coords.x] = Cell(coords, content);
}

bool Board::AreCoordinatesValid(int x, int y) {
    return (x >= 0 && x < columns_) && (y >= 0 && y < rows_);
}

bool Board::IsSelectionValid(Selection selection) {
    bool isValid = false;
    if (selection.size() == keyword_.size()) {
        cout << "Selection length valid" << endl;
        if (selection.IsAligned()) {
            cout << "Selection is aligned" << endl;
            if (selection.IsConsecutive()) {
                cout << "Selection is consecutive" << endl;
                if (selection.DoesContainKeyword(keyword_)) {
                    cout << "Selection contains keyword" << endl;
                    isValid = true;
                } else {
                    cout << "Selection DOES NOT contains keyword" << endl;
                }
            } else {
                cout << "Selection is NOT consecutive" << endl;
            }
        } else {
            cout << "Selection is NOT aligned" << endl;
        }
    } else {
        cout << "Selection length (" << selection.size() << ") NOT valid" << endl;
    }
    return isValid;
}

string Board::keyword() {
    return keyword_;
}

void Board::set_keyword(string keyword) {
    keyword_ = keyword;
}
