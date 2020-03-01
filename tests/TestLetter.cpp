#include "../include/Letter.h"
#include "gtest/gtest.h"

namespace OSO {

  // The fixture for testing class Foo.
  class LetterTest : public ::testing::Test {
    protected:
      // You can remove any or all of the following functions if its body
      // is empty.
      LetterTest() {
        // You can do set-up work for each test here.
      }

      ~LetterTest() override {
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

  // Tests that the Matrix::Initialize() initializes to 0.
  TEST_F(LetterTest, CheckCoordinatesAreCreatedCorrectly) {
    // Generate data to check
    // Generate a matrix to check with?
    int coordinateX = 1;
    int coordinateY = 2;

    EXPECT_EQ(Coordinates(1, 2).x, 1);
    EXPECT_EQ(Coordinates(1, 2).y, 2);
  }

  TEST_F(LetterTest, CheckCoordinatesAreUpdatedcorrectly) {
    int x = 1;
    int y = 2;

    Coordinates coordinates = Coordinates(0, 0);
    coordinates = Coordinates(x, y);
    EXPECT_EQ(coordinates.x, x);
    EXPECT_EQ(coordinates.y, y);
  }

}  // namespace
