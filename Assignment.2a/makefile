# Compiler selection - use g++ for C++ programs
CXX = g++

# Compiler flags:
# -std=c++17 : Use C++17 standard
# -Wall      : Enable all warnings
# -Wextra    : Enable extra warnings
CXXFLAGS = -std=c++17 -Wall -Wextra

# Rule to build the final executable 'myProg'
# Depends on 'main.o' (compiled object file)
# Command: Link 'main.o' into executable 'myProg'
myProg : main.o
	$(CXX) main.o -o myProg

# Rule to compile 'main.cpp' into 'main.o'
# Depends on 'main.cpp' and 'header.h' (if modified, recompile)
# Command: Compile with $(CXXFLAGS) and generate object file (-c)
main.o : main.cpp header.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Rule to clean up build artifacts
# Works on Unix (rm) and Windows (del)
clean : 
	@if [ -n "$$(which rm)" ]; then \            # Check if 'rm' is available (Unix)       
		rm -rf myProg *.o; \                # Delete executable and object files
	else \                                    # Else, assume Windows
		del /Q myProg.exe *.o 2>nul || echo "Nothing to clean"; \  # Quiet cleanup
	fi
