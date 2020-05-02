#include "gtest/gtest.h"

#include "../include/Player.h"

namespace {

  // The fixture for testing class Foo.
  class UserTest : public ::testing::Test {
    protected:
      // You can remove any or all of the following functions if its body
      // is empty.
      UserTest() {
        // You can do set-up work for each test here.
      }

      ~UserTest() override {
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
      Player user = Player("Ken");
  };

  // Tests that the Matrix::Initialize() initializes to 0.
  TEST_F(UserTest, Constructor) {
    // Generate data to check
    // Generate a matrix to check with?
    EXPECT_EQ(user.name(), "Ken");
  }

}  // namespace
