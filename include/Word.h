#ifndef WORD_H
#define WORD_H

#include "../include/Letter.h"

class Word {
  public:

    // Parameters are first and last letter from the word
    Word(Letter, Letter);

    int getSize(){
      return size;
    }

    // Word destructor
    ~Word();

  private:

    // The coordinates for the first and last letter of the word
    Letter first;
    Letter last;

    // Stores the word size
    int size;
    // Calculates the word size based on the firs and last letter coordinates.
    int calculateWordSize();
};

#endif
