CXX = g++
CXXFLAGS = -std=c++11 -pthread -Wall -Wno-deprecated-declarations
TARGET = cse4001_sync
SRC = cse4001_sync.cpp problem1.cpp problem2.cpp problem3.cpp problem4.cpp

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
