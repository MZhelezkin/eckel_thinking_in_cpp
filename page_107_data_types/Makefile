CC=g++
CFLAGS=-c -Wall
STD=c++11
# Этот файл компилирует проект и создает исполняемый файл.
all: prg
	
prg: main.o
	$(CC) --std=$(STD) -o test main.o

main.o: main.cpp
	$(CC) --std=$(STD) $(CFLAGS) main.cpp

clean:
	rm -rf *.o test
