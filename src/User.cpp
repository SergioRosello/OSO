#include "../include/User.h"
using namespace std;

User::User(string username) {
  this->username = username;
  this->score = 0;
}

void User::incrementScore(int score){
  this->score += score;
}

string User::getUsername() {
  return this->username;
}

void User::setUsername(string username) {
  this->username = username;
}

int User::getScore() {
  return this->score;
}

void User::resetScore() {
  this->score = 0;
}
