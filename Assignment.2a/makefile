CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

myProg : main.o
	$(CXX) main.o -o myProg

main.o : main.cpp header.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean : 
	@if [ -n "$$(which rm)" ]; then \
		rm -rf myProg *.o; \
	else \
		del /Q myProg.exe *.o 2>nul || echo "Nothing to clean"; \
	fi