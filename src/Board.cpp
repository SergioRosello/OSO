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

bool Board::IsSelectionValid(vector<Cell> selection) {
    bool isValid = false;
    if (selection.size() == keyword_.size()) {
        cout << "Selection length valid" << endl;
        if (IsSelectionAligned(selection)) {
            cout << "Selection is aligned" << endl;
            if (IsSelectionConsecutive(selection)) {
                cout << "Selection is consecutive" << endl;
                if (DoesSelectionContainsKeyword(selection)) {
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

bool Board::IsSelectionAligned(vector<Cell> selection) {
    bool areAligned = true;
    if(!(selection[0].GetXCoordinate() == selection[1].GetXCoordinate()
        && selection[1].GetXCoordinate() == selection[2].GetXCoordinate())
    && !(selection[0].GetYCoordinate() == selection[1].GetYCoordinate()
        && selection[1].GetYCoordinate() == selection[2].GetYCoordinate())) {
            int ratio1 = (selection[1].GetXCoordinate() - selection[0].GetXCoordinate()) / (selection[2].GetXCoordinate() - selection[1].GetXCoordinate());
            int ratio2 = (selection[1].GetYCoordinate() - selection[0].GetYCoordinate()) / (selection[2].GetYCoordinate() - selection[1].GetYCoordinate());
            areAligned = ratio1 == ratio2;
    }
    return areAligned;
}

bool Board::IsSelectionConsecutive(std::vector<Cell> selection) {
    return ((selection[1].GetXCoordinate() == selection[0].GetXCoordinate() + 1)
            && (selection[2].GetXCoordinate() == selection[0].GetXCoordinate() + 2))
            || ((selection[1].GetYCoordinate() == selection[0].GetYCoordinate() + 1)
            && (selection[2].GetYCoordinate() == selection[0].GetYCoordinate() + 2));
}

bool Board::DoesSelectionContainsKeyword(std::vector<Cell> selection) {
    bool containsKeyword = true;
    for (size_t i = 0; i < keyword_.size(); i++)
    {
        if (selection[i].content() != keyword_[i]) {
            containsKeyword = false;
        } 
    }
    return containsKeyword;
}

string Board::keyword() {
    return keyword_;
}

void Board::set_keyword(string keyword) {
    keyword_ = keyword;
}
