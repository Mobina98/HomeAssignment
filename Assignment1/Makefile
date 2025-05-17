# The 'all' target is a common convention meaning "build everything"
# It depends on the 'main' target (the final executable)
all: main

# Rule for compiling main.cpp into main.o (object file)
# Depends on both main.cpp and hello.h (if hello.h changes, main.o must be recompiled)
main.o: main.cpp hello.h
            g++ -c main.cpp   # Compile command (-c flag means "compile only, don't link")       

# Rule for linking all object files into the final executable named 'main'
# Depends on both main.o and hello.o being up-to-date
hello.o: hello.cpp hello.h	 
	g++ -c hello.cpp  # Compile command for hello.cpp

# Rule for linking all object files into the final executable named 'main'
# Depends on both main.o and hello.o being up-to-date
main: main.o hello.o	
    # Linking command:
    # -Wall enables all compiler warnings
    # -o main specifies the output executable name
    g++ -Wall -o main main.o hello.o  

# Special target for cleaning up generated files
clean:
	# Remove the main executable and all .o object files
        rm -f main *.o
