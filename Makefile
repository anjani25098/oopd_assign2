CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinclude

TARGET = bibparser
SRCS = main.cpp src/BibParser.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
