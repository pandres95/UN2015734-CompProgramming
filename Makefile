GCC		= g++
CFLAGS	= -Wall

SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:src/%.cpp=bin/%)

$(OBJ): $(SRC)
	mkdir bin
	$(GCC) $(CFLAGS) -o $@ $^

clean:
	rm -rf bin/*
