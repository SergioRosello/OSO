#include <iostream>

// Include board headers
#include "board.h"

Board::Board(int row, int column){
  this->row = row;
  this->column = column;

  this->board = new int*[this->row];
  for(int i = 0; i < row; ++i){
    this->board[i] = new int[this->column];
  }
}

void Board::printBoard(){
  for(int i = 0; i < this->row; ++i){
    for(int j = 0; j < this->column; ++j){
      std::cout << "[" << i << "][" << j << "] = " << this->board[i][j] << " "; 
    }
    std::cout << "\n";
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

// Destructor method
Board::~Board(){
  for(int i = 0; i < this->row; ++i)
    delete [] this->board[this->column];
  delete [] this->board;
}
