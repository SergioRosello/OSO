CFLAGS = -o
CC = g++
SRC = main.cpp Matrix.cpp
OBJ = $(SRC:.cpp = .o)
OSO:
	$(CC) $(OBJ) $(CFLAGS) OSO
clean:
	rm -f core *.o 
