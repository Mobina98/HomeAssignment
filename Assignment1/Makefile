.PHONY: all clean

all: main
main.o: main.cpp hello.h     #Создание зависимости main.o от main.cpp и hello.h
	g++ -Wall -c main.cpp          #Компиляция без линковки
hello.o: hello.cpp hello.h	 #Создание зависимости hello.o от hello.cpp и заголовочным файлом hello.h
	g++ -Wall -c hello.cpp
main: main.o hello.o		#Создание зависимости двоичного main от main.o и hello.o
	g++ -Wall -o main main.o hello.o  #Линковка с учётом прошлых параметров для комиплятора под флагом -Wall
clean:
	rm -f main *.o			# Очистка сгенерированных файлов