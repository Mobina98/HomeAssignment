all: main
main.o: main.cpp hello.h     
	g++ -c main.cpp          
hello.o: hello.cpp hello.h	 
	g++ -c hello.cpp
main: main.o hello.o		
	g++ -Wall -o main main.o hello.o  
clean:
	rm -f main *.o
