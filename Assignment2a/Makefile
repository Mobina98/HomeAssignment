CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=assignment2a.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE= assignment2a

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -rf *.o $(EXECUTABLE) output_file.bin
