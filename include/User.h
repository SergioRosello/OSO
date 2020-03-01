#ifndef USER_H
#define USER_H

#include <iostream>

class User {
  private:
    std::string username;
    int score;

  public:
    User(std::string username);
    void incrementScore(int score);
    std::string getUsername();
    void setUsername(std::string username);
    int getScore();
    void resetScore();
};

#endif
