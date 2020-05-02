#ifndef CLIBOARDCONTROLLER_H_
#define CLIBOARDCONTROLLER_H_

#include <iostream>
#include "../include/Board.h"
#include "../include/CliBoardView.h"
#include "../include/Cell.h"

class CliBoardController{
  public:
    Board board;

    // Returns one of the board's sides size
    int getBoardSize();
    // Asks Player for a letter, and converts it to
    // type Letter, to use custom classes in whole
    // programm.
    Cell getUserLetter();
    // Returns the coordinates for the letter the user has entered
    Coordinates getLetterCoordinates();
    bool hasUserSeenBoard();
    // This is the MVC method, it has to update
    // the board model through the boardController
    void updateBoard();
};

#endif  // CLIBOARDCONTROLLER_H_
