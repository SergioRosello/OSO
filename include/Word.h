#include "../include/Letter.h"

class Word {
  public: 

    // Parameters are first and last letter from the word
    Word(Letter, Letter);

    int getSize(){
      return size;
    }

  private:

    // The coordinates for the first and last letter of the word
    Letter first;
    Letter last;

    // Stores the word size
    int size;
    ~Word();
};
