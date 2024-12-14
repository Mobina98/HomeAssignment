all: app

app: main.o revpolnot.o
	g++ main.o revpolnot.o -o app

main.o: main.cpp
	g++ -c main.cpp

revpolnot.o: revpolnot.cpp
	g++ -c revpolnot.cpp

clean:
	rm -rf *.o app