OSO_CFLAGS = -o OSO
TEST_CFLAGS = -o OSO -lgtest -lpthread
CC = g++
OSO_SRC = src/Main.cpp src/Board.cpp
TEST_SRC = tests/TestBoard.cpp src/Board.cpp
OSO_OBJ = $(OSO_SRC:.cpp = .o)
TEST_OBJ = $(TEST_SRC:.cpp = .o)
oso:
	$(CC) $(OSO_OBJ) $(OSO_CFLAGS) 
test:
	$(CC) $(TEST_OBJ) $(TEST_CFLAGS) 
run:
	./OSO
clean:
	rm -f core *.o OSO

