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
    Letter firstLetter = Letter(Coordinates(0, 3), 'H');
    Letter secondLetter = Letter(Coordinates(0, 2), 'O');
    Letter thirdLetter = Letter(Coordinates(0, 1), 'L');
    Letter lastLetter = Letter(Coordinates(0, 0), 'A');

    Word word = Word(firstLetter, lastLetter);
    EXPECT_EQ(word.getSize(), 4);
  }

  TEST_F(WordTest, CheckWordOrientationSizeIsCorrect) {
    // North
    Letter firstNorthLetter = Letter(Coordinates(0, 2), 'O');
    Letter secondNorthLetter = Letter(Coordinates(0, 1), 'S');
    Letter thirdNorthLetter = Letter(Coordinates(0, 0), 'O');

    Word northWord = Word(firstNorthLetter, thirdNorthLetter);
    EXPECT_EQ(northWord.getSize(), 3);

    // North-East
    Letter firstNorthEastLetter = Letter(Coordinates(0, 2), 'O');
    Letter secondNorthEastLetter = Letter(Coordinates(1, 2), 'S');
    Letter thirdNorthEastLetter = Letter(Coordinates(2, 0), 'O');

    Word northEastWord = Word(firstNorthEastLetter, thirdNorthEastLetter);
    EXPECT_EQ(northEastWord.getSize(), 3);

    // East
    Letter firstEastLetter = Letter(Coordinates(0, 0), 'O');
    Letter secondEastLetter = Letter(Coordinates(1, 0), 'S');
    Letter thirdEastLetter = Letter(Coordinates(2, 0), 'O');

    Word eastWord = Word(firstEastLetter, thirdEastLetter);
    EXPECT_EQ(eastWord.getSize(), 3);

    // South-East
    Letter firstSouthEastLetter = Letter(Coordinates(0, 0), 'O');
    Letter secondSouthEastLetter = Letter(Coordinates(1, 1), 'S');
    Letter thirdSouthEastLetter = Letter(Coordinates(2, 2), 'O');

    Word southEastWord = Word(firstSouthEastLetter, thirdSouthEastLetter);
    EXPECT_EQ(southEastWord.getSize(), 3);

    // South
    Letter firstSouthLetter = Letter(Coordinates(0, 0), 'O');
    Letter secondSouthLetter = Letter(Coordinates(0, 1), 'S');
    Letter thirdSouthLetter = Letter(Coordinates(0, 2), 'O');

    Word southWord = Word(firstSouthLetter, thirdSouthLetter);
    EXPECT_EQ(southWord.getSize(), 3);

    // Sout-West
    Letter firstSouthWestLetter = Letter(Coordinates(2, 0), 'O');
    Letter secondSouthWestLetter = Letter(Coordinates(1, 1), 'S');
    Letter thirdSouthWestLetter = Letter(Coordinates(0, 2), 'O');

    Word southWestWord = Word(firstSouthWestLetter, thirdSouthWestLetter);
    EXPECT_EQ(southWestWord.getSize(), 3);

    // West
    Letter firstWestLetter = Letter(Coordinates(2, 0), 'O');
    Letter secondWestLetter = Letter(Coordinates(1, 0), 'S');
    Letter thirdWestLetter = Letter(Coordinates(0, 0), 'O');

    Word westWord = Word(firstWestLetter, thirdWestLetter);
    EXPECT_EQ(westWord.getSize(), 3);

    // North-West
    Letter firstNorthWestLetter = Letter(Coordinates(2, 2), 'O');
    Letter secondNorthWestLetter = Letter(Coordinates(1, 1), 'S');
    Letter thirdNorthWestLetter = Letter(Coordinates(0, 0), 'O');

    Word northWestWord = Word(firstNorthWestLetter, thirdNorthWestLetter);
    EXPECT_EQ(northWestWord.getSize(), 3);

  }

}  // namespace
