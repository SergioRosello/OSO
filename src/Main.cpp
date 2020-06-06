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
    int rows = 6;
    int columns = 6;
    Board board = Board(rows, columns, "oso");
    vector<Player> players = { Player("Player1"), Player("Player2") };
    int rounds = 3;

    bool isBadStep = false;
    for (size_t i = 0; i < rounds; i++)
    {
        cout << "******* Round " << (i + 1) << " *******" << endl;
        for (Player& p : players) {
            cout << "Your turn, " << p.name() << "!" << endl;
            do {
                if (isBadStep) {
                    cout << "Playing " << p.name() << endl;
                    isBadStep = false;
                }
                
                board.ShowBoard();

                cout << "What letter do you want to put (o/s)" << endl;
                char newLetter;
                int xCoord, yCoord;
                cin >> newLetter;
                xCoord = getIntegerInput("Please, enter X coord of letter: ");
                yCoord = getIntegerInput("Please, enter Y coord of letter: ");
                if (board.AreCoordinatesValid(xCoord, yCoord)) {
                    board.PlaceLetter(Coordinates(xCoord, yCoord), newLetter);
                    board.ShowBoard();

                    cout << "Do you see any OSO? (y/n)" << endl;
                    char isUserSeingKeyword;
                    cin >> isUserSeingKeyword;
                    if (isUserSeingKeyword == 'y') {
                        cout << "Mark it!" << endl;
                        Selection selectedLetters;
                        for (int i = 0; i < board.keyword().size(); i++) {
                            cout << "What are the three coordinates of letter number "<< i << "?: " << endl;
                            xCoord = getIntegerInput("Please, enter X coord of letter: ");
                            yCoord = getIntegerInput("Please, enter Y coord of letter: ");
                            Coordinates coords = Coordinates(xCoord, yCoord);
                            char content = board.GetLetterAt(coords).content();
                            Cell selectedLetter = Cell(coords, content);
                            selectedLetters.AddCell(selectedLetter);
                        }

                        if (board.IsSelectionValid(selectedLetters)) {
                            cout << "+1 for " << p.name() << endl;
                            p.IncrementScore(1);
                        } else {
                            break;
                        }
                    }
                } else {
                    cout << "Coordinates are NOT valid" << endl;
                    isBadStep = true;
                }
            } while (isBadStep);
        }
    }

    return 0;
}
