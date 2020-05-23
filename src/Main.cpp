#include <iostream>
#include <limits>
#include <string>
#include <vector>

#include "../include/Board.h"
#include "../include/Selection.h"
#include "../include/Player.h"

using namespace std;

int getIntegerInput(string msg) {
    int input = 0;
    while (true) {
        cout << msg;
        cin >> input;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please, enter a number." << endl;
        } else {
            break;
        }
    }

    return input;
}

int main() {
    int rows = 10;
    int columns = 10;
    Board board = Board(rows, columns, "oso");

    char exitKey;
    do {
        board.ShowBoard();

        char newLetter;
        int xCoord, yCoord;
        cout << "Your turn! What letter do you want to put (o/s)" << endl;
        cin >> newLetter;
        xCoord = getIntegerInput("Please, enter X coord of letter: ");
        yCoord = getIntegerInput("Please, enter Y coord of letter: ");
        if (board.AreCoordinatesValid(xCoord, yCoord)) {
            cout << "Coordinates are valid" << endl;
            board.PlaceLetter(Coordinates(xCoord, yCoord), newLetter);
            cout << "Do you see any OSO? (y/n)" << endl;
            char isUserSeingKeyword;
            cin >> isUserSeingKeyword;
            if (isUserSeingKeyword == 'y') {
                cout << "Mark it!" << endl;
                vector<Cell> selectedLetters;
                for (int i = 0; i < board.keyword().size(); i++) {
                    cout << "What are the three coordinates of letter number "<< i << "?: ";
                    xCoord = getIntegerInput("Please, enter X coord of letter: ");
                    yCoord = getIntegerInput("Please, enter Y coord of letter: ");
                    Coordinates coords = Coordinates(xCoord, yCoord);
                    char content = board.GetLetterAt(coords).content();
                    Cell selectedLetter = Cell(coords, content);
                }

                // TODO(minicatsCB): Check if user selection is valid
            }
        } else {
            cout << "Coordinates are NOT valid" << endl;
        }
        cout << "Exit (y/n)?";
        cin >> exitKey;
    } while (exitKey != 'y');

    return 0;
}
