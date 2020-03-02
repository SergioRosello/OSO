#include <iostream>
#include "../include/Board.h"
#include "../include/Word.h"
#include "../include/User.h"

using namespace std;

int main(){
  Letter letter = Letter(Coordinates(20, 11), 'O');

  Letter secondLetter = Letter(Coordinates(21, 12), 'S');

  Letter thirdLetter = Letter(Coordinates(22, 13), 'O');

  Word word = Word(letter, thirdLetter);
  cout << "Word size: " << word.getSize() << endl;

  User user = User("John");

  cout << user.getUsername() << endl;

  return 0;
}
