CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude

SRCS = src/Publication.cpp src/Bibliography.cpp src/BibParser.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: bibparser

bibparser: $(SRCS)
	$(CXX) $(CXXFLAGS) -o bibparser $(SRCS)

clean:
	rm -f bibparser $(OBJS)
