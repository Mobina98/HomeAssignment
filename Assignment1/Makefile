all: main

main.o: main.cpp hello.h     # Creating a dependency of main.o on main.cpp and hello.h
        g++ -Wall -Wextra -std=c++17 -c main.cpp    # Compilation without linking

hello.o: hello.cpp hello.h   # Creating a dependency of hello.o on hello.cpp and hello.h
        g++ -Wall -Wextra -std=c++17 -c hello.cpp   # Compilation without linking

main: main.o hello.o         # Creating a binary main dependency on main.o and hello.o
        g++ -Wall -Wextra -std=c++17 -o main main.o hello.o   # Linking with the -Wall flag

clean:
        rm -f main *.o       # Cleaning generated files