CC=clang++
CPPFLAGS=--std=c++11 -pedantic -Wall

all: main.cpp LinkedList.o
	$(CC) $(CPPFLAGS) main.cpp LinkedList.o

LinkedList.o: LinkedList.cpp
	$(CC) $(CPPFLAGS) -c LinkedList.cpp

clean:
	rm -f *.a *.out