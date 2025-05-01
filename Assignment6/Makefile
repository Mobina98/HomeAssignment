CC=g++
CFLAGS=-Werror -Wpedantic -Wall -std=c++17
LDFLAGS= -lgtest -lgtest_main -lpthread
SOURCES=Class1.cpp Class2.cpp Class3.cpp tests.cpp
HEADERS=Class1.h Class2.h Class3.h template_class.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=tests

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) $(LDFLAGS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


dependencies: $(SOURCES) $(HEADERS)
	$(CC) -MM $(SOURCES) > dependencies.mk

-include dependencies.mk

format:
	astyle -A1 -s4 *.cpp *.h
	rm -rf *.orig

.PHONY: clean

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS) *.mk