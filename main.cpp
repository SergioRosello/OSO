#include <iostream>
#include "Matrix.h"

int main(){
  Matrix matrix = Matrix(10, 10);
  matrix.initialize();
  matrix.printMatrix();
  matrix.clean();

  return 0;
}

