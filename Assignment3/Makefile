PROJECT = app

LIBPROJECT = $(PROJECT).a

TESTPROJECT = test-$(PROJECT)

CXX = g++

A = ar

AFLAGS = rsv

CXXFLAGS = -I. -std=c++17 -Wall -g -fPIC

LDXXFLAGS = $(CXXFLAGS) -L. -l:$(LIBPROJECT)

LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread

DEPS = $(wildcard *.hpp)
SRC = $(filter-out main.cpp, $(wildcard *.cpp))
OBJ = $(patsubst %.cpp, %.o, $(SRC))

TEST-OBJ = test.o

.PHONY: default

default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT) : $(OBJ)
	$(A) $(AFLAGS) $@ $^

$(PROJECT) : main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)

$(TESTPROJECT) : $(LIBPROJECT) $(TESTOBJ)
	$(CXX) $(TEST-OBJ) -o $@ $(LDGTESTFLAGS)

test: $(TESTPROJECT)

app: $(PROJECT)

all:
	make app
	make test

.PHONY: clean

clean:
	rm $(PROJECT) $(TESTPROJECT) $(LIBPROJECT) *.o 