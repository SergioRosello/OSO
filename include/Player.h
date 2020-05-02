#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

class Player {
  public:
    explicit Player(std::string name);
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

#endif  // PLAYER_H_
