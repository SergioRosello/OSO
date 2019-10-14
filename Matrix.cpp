#include <iostream>

// Include matrix headers
#include "Matrix.h"

Matrix::Matrix(int row, int column){
  this->row = row;
  this->column = column;

  this->matrix = new int*[this->row];
  for(int i = 0; i < row; ++i){
    this->matrix[i] = new int[this->column];
  }
}

void Matrix::printMatrix(){
  for(int i = 0; i < this->row; ++i){
    for(int j = 0; j < this->column; ++j){
      std::cout << "[" << i << "][" << j << "] = " << this->matrix[i][j] << " "; 
    }
    std::cout << "\n";
  }
}

int Matrix::initialize(){
  for(int i = 0; i < this->row; ++i){
    for(int j = 0; j < this->column; ++j){
      this->matrix[i][j] = 0; 
    }
  }
  return 0;
}

// Destructor method
Matrix::~Matrix(){
  for(int i = 0; i < this->row; ++i)
    delete [] this->matrix[this->column];
  delete [] this->matrix;
}
