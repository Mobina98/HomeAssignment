# Compiler selection - use g++ for C++ compilation
CXX = g++

# Compiler flags:
# -Wall       : Enable all standard warnings
# -Wextra     : Enable extra warnings
# -std=c++11  : Use C++11 standard
CXXFLAGS = -Wall -Wextra -std=c++11

# Name of the final executable
TARGET = myProg

# Default target (run when you type 'make' without arguments)
# Depends on $(TARGET) to ensure the program is built
all: $(TARGET)

# Rule to link the final executable
# Depends on main.o (must be built first)
# Command: links main.o into executable named $(TARGET)
$(TARGET): main.o
	$(CXX) main.o -o $(TARGET)

# Rule to compile main.cpp into main.o
# Depends on both main.cpp and header.h (recompiles if either changes)
# Command: compiles with $(CXXFLAGS) and generates object file (-c)
main.o: main.cpp header.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Cleanup rule (removes generated files)
# Command: removes the executable and all .o files
clean:
	rm -rf $(TARGET) *.o
