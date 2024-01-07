CXX = g++
CXXFLAGS = -Wall -g
MAIN = connect4

all: $(MAIN)

$(MAIN): $(MAIN).cpp playboard.h wincheck.h
    $(CXX) $(CXXFLAGS) -o $(MAIN) $(MAIN).cpp

clean:
    rm $(MAIN)