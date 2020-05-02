#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player {
  public:
    Player(std::string name);
    ~Player();

    void IncrementScore(int score);
    void ResetScore();

    std::string name();
    void set_name(std::string name);
    int score();

  private:
    std::string name_;
    int score_;
};

#endif
