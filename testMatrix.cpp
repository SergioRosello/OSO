#include "Matrix.h"
#include "gtest/gtest.h"

namespace {

// The fixture for testing class Foo.
class MatrixTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.
  MatrixTest() {
    // You can do set-up work for each test here.
  }

  ~MatrixTest() override {
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

  int rows = 10;
  int columns = 10;
  Matrix matrix = Matrix(rows, columns);
  // Objects declared here can be used by all tests in the test suite for Foo.
};

// Tests that the Matrix::Initialize() initializes to 0.
TEST_F(MatrixTest, MethodInitializationSetsTo0) {
  // Generate data to check
  // Generate a matrix to check with?
  EXPECT_EQ(matrix.matrix[rows-1][columns-1], 0);
}

}  // namespace

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
