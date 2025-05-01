CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
TARGET = myProg

all: $(TARGET)

$(TARGET): main.o
	$(CXX) main.o -o $(TARGET)

main.o: main.cpp header.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -rf $(TARGET) *.o