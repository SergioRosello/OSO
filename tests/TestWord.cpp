#include "gtest/gtest.h"

#include "../include/Selection.h"

namespace OSO {

  // The fixture for testing class Foo.
  class WordTest : public ::testing::Test {
    protected:
      // You can remove any or all of the following functions if its body
      // is empty.
      WordTest() {
        // You can do set-up work for each test here.
      }

      ~WordTest() override {
        // You can do clean-up work that doesn't throw exceptions here.
      }

      // If the constructor and destructor are not enough for setting up
      // and cleaning up each test, you can define the following methods:

      void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
      }

      void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
      }

      // Objects declared here can be used by all tests in the test suite for Foo.
  };

  TEST_F(WordTest, CheckWordSizeIsCorrect) {
    Cell firstLetter = Cell(Coordinates(0, 3), 'H');
    Cell secondLetter = Cell(Coordinates(0, 2), 'O');
    Cell thirdLetter = Cell(Coordinates(0, 1), 'L');
    Cell lastLetter = Cell(Coordinates(0, 0), 'A');

    Selection word;
    word.AddCell(firstLetter);
    word.AddCell(secondLetter);
    word.AddCell(thirdLetter);
    word.AddCell(lastLetter);
    EXPECT_EQ(word.size(), 4);
  }

  TEST_F(WordTest, CheckWordDirectionIsCorrect) {
    // Up
    Cell firstUpLetter = Cell(Coordinates(0, 2), 'O');
    Cell secondUpLetter = Cell(Coordinates(0, 1), 'S');
    Cell thirdNUpLetter = Cell(Coordinates(0, 0), 'O');

    Selection upWord;
    upWord.AddCell(firstUpLetter);
    upWord.AddCell(secondUpLetter);
    upWord.AddCell(thirdNUpLetter);
    EXPECT_EQ(upWord.direction(), Direction::kUp);

    // Up-Right
    Cell firstUpRightLetter = Cell(Coordinates(0, 5), 'O');
    Cell secondUpRightLetter = Cell(Coordinates(1, 4), 'S');
    Cell thirdUpRightLetter = Cell(Coordinates(2, 3), 'O');

    Selection upRightWord;
    upRightWord.AddCell(firstUpRightLetter);
    upRightWord.AddCell(secondUpRightLetter);
    upRightWord.AddCell(thirdUpRightLetter);
    EXPECT_EQ(upRightWord.direction(), Direction::kUpRight);

    // Right
    Cell firstRightLetter = Cell(Coordinates(0, 0), 'O');
    Cell secondRightLetter = Cell(Coordinates(1, 0), 'S');
    Cell thirdNRightLetter = Cell(Coordinates(2, 0), 'O');

    Selection rightWord;
    rightWord.AddCell(firstRightLetter);
    rightWord.AddCell(secondRightLetter);
    rightWord.AddCell(thirdNRightLetter);
    EXPECT_EQ(rightWord.direction(), Direction::kRight);

    // Down-Right
    Cell firstDownRightLetter = Cell(Coordinates(0, 0), 'O');
    Cell secondDownRightLetter = Cell(Coordinates(1, 1), 'S');
    Cell thirdDownRightLetter = Cell(Coordinates(2, 2), 'O');

    Selection downRightWord;
    downRightWord.AddCell(firstDownRightLetter);
    downRightWord.AddCell(secondDownRightLetter);
    downRightWord.AddCell(thirdDownRightLetter);
    EXPECT_EQ(downRightWord.direction(), Direction::kDownRight);

    // Down
    Cell firstDownLetter = Cell(Coordinates(0, 0), 'O');
    Cell secondDownLetter = Cell(Coordinates(0, 1), 'S');
    Cell thirdNDownLetter = Cell(Coordinates(0, 2), 'O');

    Selection downWord;
    downWord.AddCell(firstDownLetter);
    downWord.AddCell(secondDownLetter);
    downWord.AddCell(thirdNDownLetter);
    EXPECT_EQ(downWord.direction(), Direction::kDown);

    // Down-Left
    Cell firstDownLeftLetter = Cell(Coordinates(2, 0), 'O');
    Cell secondDownLeftLetter = Cell(Coordinates(1, 1), 'S');
    Cell thirdDownLeftLetter = Cell(Coordinates(0, 2), 'O');

    Selection downLeftWord;
    downLeftWord.AddCell(firstDownLeftLetter);
    downLeftWord.AddCell(secondDownLeftLetter);
    downLeftWord.AddCell(thirdDownLeftLetter);
    EXPECT_EQ(downLeftWord.direction(), Direction::kDownLeft);

    // Left
    Cell firstLeftLetter = Cell(Coordinates(2, 0), 'O');
    Cell secondLeftLetter = Cell(Coordinates(1, 0), 'S');
    Cell thirdNLeftLetter = Cell(Coordinates(0, 0), 'O');

    Selection leftWord;
    leftWord.AddCell(firstLeftLetter);
    leftWord.AddCell(secondLeftLetter);
    leftWord.AddCell(thirdNLeftLetter);
    EXPECT_EQ(leftWord.direction(), Direction::kLeft);

    // Up-Left
    Cell firstUpLeftLetter = Cell(Coordinates(2, 2), 'O');
    Cell secondUpLeftLetter = Cell(Coordinates(1, 1), 'S');
    Cell thirdUpLeftLetter = Cell(Coordinates(0, 0), 'O');

    Selection upLeftWord;
    upLeftWord.AddCell(firstUpLeftLetter);
    upLeftWord.AddCell(secondUpLeftLetter);
    upLeftWord.AddCell(thirdUpLeftLetter);
    EXPECT_EQ(upLeftWord.direction(), Direction::kUpLeft);
  }

}  // namespace
