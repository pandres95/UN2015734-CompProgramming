# Project: problems
# Makefile created by Dev-C++ 5.6.2

CPP      = g++
CC       = gcc
OBJ      = obj/main.o obj/trig.o obj/phys.o obj/geom.o obj/chem.o obj/biol.o
LINKOBJ  = obj/trig.o obj/phys.o obj/chem.o obj/biol.o obj/geom.o obj/main.o
LIBS     =
INCS     = -I"include"
CXXINCS  = -I"include"
BIN      = bin/problems
CXXFLAGS = $(CXXINCS)
CFLAGS   = $(INCS)
RM       = rm -rf

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

obj/main.o: src/main.cpp
	$(CPP) -c src/main.cpp -o obj/main.o $(CXXFLAGS)

obj/trig.o: src/trig.cpp
	$(CPP) -c src/trig.cpp -o obj/trig.o $(CXXFLAGS)

obj/phys.o: src/phys.cpp
	$(CPP) -c src/phys.cpp -o obj/phys.o $(CXXFLAGS)

obj/geom.o: src/geom.cpp
	$(CPP) -c src/geom.cpp -o obj/geom.o $(CXXFLAGS)

obj/chem.o: src/chem.cpp
	$(CPP) -c src/chem.cpp -o obj/chem.o $(CXXFLAGS)

obj/biol.o: src/biol.cpp
	$(CPP) -c src/biol.cpp -o obj/biol.o $(CXXFLAGS)
