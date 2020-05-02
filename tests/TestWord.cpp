#include "../include/Word.h"
#include "gtest/gtest.h"

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

    Word word = Word(firstLetter, lastLetter);
    EXPECT_EQ(word.getSize(), 4);
  }

  TEST_F(WordTest, CheckWordOrientationSizeIsCorrect) {
    // North
    Cell firstNorthLetter = Cell(Coordinates(0, 2), 'O');
    Cell secondNorthLetter = Cell(Coordinates(0, 1), 'S');
    Cell thirdNorthLetter = Cell(Coordinates(0, 0), 'O');

    Word northWord = Word(firstNorthLetter, thirdNorthLetter);
    EXPECT_EQ(northWord.getSize(), 3);

    // North-East
    Cell firstNorthEastLetter = Cell(Coordinates(0, 2), 'O');
    Cell secondNorthEastLetter = Cell(Coordinates(1, 2), 'S');
    Cell thirdNorthEastLetter = Cell(Coordinates(2, 0), 'O');

    Word northEastWord = Word(firstNorthEastLetter, thirdNorthEastLetter);
    EXPECT_EQ(northEastWord.getSize(), 3);

    // East
    Cell firstEastLetter = Cell(Coordinates(0, 0), 'O');
    Cell secondEastLetter = Cell(Coordinates(1, 0), 'S');
    Cell thirdEastLetter = Cell(Coordinates(2, 0), 'O');

    Word eastWord = Word(firstEastLetter, thirdEastLetter);
    EXPECT_EQ(eastWord.getSize(), 3);

    // South-East
    Cell firstSouthEastLetter = Cell(Coordinates(0, 0), 'O');
    Cell secondSouthEastLetter = Cell(Coordinates(1, 1), 'S');
    Cell thirdSouthEastLetter = Cell(Coordinates(2, 2), 'O');

    Word southEastWord = Word(firstSouthEastLetter, thirdSouthEastLetter);
    EXPECT_EQ(southEastWord.getSize(), 3);

    // South
    Cell firstSouthLetter = Cell(Coordinates(0, 0), 'O');
    Cell secondSouthLetter = Cell(Coordinates(0, 1), 'S');
    Cell thirdSouthLetter = Cell(Coordinates(0, 2), 'O');

    Word southWord = Word(firstSouthLetter, thirdSouthLetter);
    EXPECT_EQ(southWord.getSize(), 3);

    // Sout-West
    Cell firstSouthWestLetter = Cell(Coordinates(2, 0), 'O');
    Cell secondSouthWestLetter = Cell(Coordinates(1, 1), 'S');
    Cell thirdSouthWestLetter = Cell(Coordinates(0, 2), 'O');

    Word southWestWord = Word(firstSouthWestLetter, thirdSouthWestLetter);
    EXPECT_EQ(southWestWord.getSize(), 3);

    // West
    Cell firstWestLetter = Cell(Coordinates(2, 0), 'O');
    Cell secondWestLetter = Cell(Coordinates(1, 0), 'S');
    Cell thirdWestLetter = Cell(Coordinates(0, 0), 'O');

    Word westWord = Word(firstWestLetter, thirdWestLetter);
    EXPECT_EQ(westWord.getSize(), 3);

    // North-West
    Cell firstNorthWestLetter = Cell(Coordinates(2, 2), 'O');
    Cell secondNorthWestLetter = Cell(Coordinates(1, 1), 'S');
    Cell thirdNorthWestLetter = Cell(Coordinates(0, 0), 'O');

    Word northWestWord = Word(firstNorthWestLetter, thirdNorthWestLetter);
    EXPECT_EQ(northWestWord.getSize(), 3);

  }

}  // namespace
