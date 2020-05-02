#include "../include/Player.h"

using namespace std;

Player::Player(string name) {
  name_ = name;
  score_ = 0;
}

Player::~Player() {}

void Player::IncrementScore(int score) {
  score_ += score;
}

void Player::ResetScore() {
  score_ = 0;
}

string Player::name() {
  return name_;
}

void Player::set_name(string name) {
  name_ = name;
}

int Player::score() {
  return score_;
}
