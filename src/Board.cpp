#include <iostream>
#include "../include/Board.h"

using namespace std;

Board::Board(int row, int column, string keyword){
  this->row = row;
  this->column = column;
  this->keyword = keyword;

  this->board = new int*[this->row];
  for(int i = 0; i < row; ++i){
    this->board[i] = new int[this->column];
  }
}

void Board::printBoard(){
  for(int i = 0; i < this->row; ++i){
    for(int j = 0; j < this->column; ++j){
      cout << "[" << i << "][" << j << "] = " << this->board[i][j] << " ";
    }
    cout << endl;
  }
}

int Board::initialize(){
  for(int i = 0; i < this->row; ++i){
    for(int j = 0; j < this->column; ++j){
      this->board[i][j] = 0;
    }
  }
  return 0;
}

string Board::getKeyword() {
    return this->keyword;
}

void Board::setKeyword(string keyword) {
    this->keyword = keyword;
}

// Destructor method
Board::~Board(){
  for(int i = 0; i < this->row; ++i)
    delete [] this->board[this->column];
  delete [] this->board;
}
