all: main
main.o: main.cpp hello.h     #Creating a dependency of main.o on main.cpp and hello.h
        g++ -c main.cpp    #Compilation without linking
hello.o: hello.cpp hello.h    #Creating a dependency hello.o on hello.cpp and a header file hello.h
        g++ -c hello.cpp
main: main.o hello.o     #Creating a binary main dependency on main.o and hello.o
        g++ -Wall -o main main.o hello.o   #Linking taking into account previous parameters for the compiler using the -Wall flag
clean:
        rm -f main *.o   # Cleaning generated files
