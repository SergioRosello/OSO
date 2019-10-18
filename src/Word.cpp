#include <cmath>
#include "../include/Word.h"

Word::Word(Letter f, Letter l) {
  this->first = f;
  this->last = l;
}

// Calculates the magnitude of the vector
double Vector::getMagnitude(){
  return sqrt(pow(x, 2) + pow(y, 2));
}

float Vector::getAngle() {
  float tempAngle;
  //angle = inv cosine of dot product divided the the product of the magnitude of vector a and vector b
  tempAngle = acos(x/magnitude);
  //return the angle in degrees
  return tempAngle*180/PI;
}
