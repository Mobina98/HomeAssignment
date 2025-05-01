CC=g++
CFLAGS=-Werror -Wpedantic -Wall -std=c++17
LDFLAGS=-lgtest -lgtest_main -lpthread
SOURCES=gun_type.cpp shooter.cpp transformer.cpp sniper.cpp medic.cpp bazookron.cpp voice.cpp tests.cpp
HEADERS=gun_type.h shooter.h transformer.h sniper.h medic.h bazookron.h voice.h
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

.PHONY: clean

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS) *.mk
