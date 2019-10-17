#include "../include/Letter.h"

class Word {
  private:
    // A word can have as many letters as it wants
    Coordinates *word;

    // Constructor with one or more letters
    Word(Letter);
    ~Word();
};
