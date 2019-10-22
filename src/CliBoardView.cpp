#include <iostream>
#include "../include/CliBoardView.h"

// Use CliController to get the board's size
void CliBoardView::drawBoard(){
  for(int i = 0; i < this->row; ++i){
    for(int j = 0; j < this->column; ++j){
      std::cout << "[" << i << "][" << j << "] = " << this->board[i][j] << " "; 
    }
    std::cout << "\n";
  }
}
