#include "../include/Letter.h"

#ifndef PI
#define PI 3.14159265
#endif

struct Vector {
  float x;
  float y;
  double magnitude;
  float angle;

  // Constructor
  // Creates the vector given two coordinates
  Vector(Coordinates x, Coordinates y)
    : x(y.x - x.x),
    y(y.y - x.x),
    magnitude(getMagnitude()),
    angle(getAngle())
  {}

  // Calculates the magnitude of the vector
  double getMagnitude();

  float getAngle();

};

class Word {
  public: 

    // We will construct the word based on its firs letter's coordinates
    // and the last letter's coordinates.
    // The reason for this is that the user will be able to create
    // any word he wants, and the board will be the resopnsable
    // to check if the word is valid or not
    // We do have to check here that the word is possible
    // There are 8 possible word directions.
    Word(Letter, Letter);

    int getSize(){
      return size;
    }

  private:

    // The coordinates for the first and last letter of the word
    Letter first;
    Letter last;

    // We interpret a word as a vector.
    // and calculate it's:
    // Magnitude: Length of the line segment
    // Direction: Angle the line forms
    bool checkIfWordDirectionIsValid();

    // We use the vector magnitude to check the word's length
    float wordMagnitude();

    // Integer to know the word's size
    int size;
    ~Word();
};
