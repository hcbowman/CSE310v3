CC=clang++
CPPFLAGS=-std=c++11 -Wall -pedantic

all: Assignment5.cpp HashTable.o LinkedList.o
	$(CC) $(CPPFLAGS) Assignment5.cpp HashTable.o LinkedList.o

HashTable.o: HashTable.cpp
	$(CC) $(CPPFLAGS) -c HashTable.cpp

LinkedList.o: LinkedList.cpp
	$(CC) $(CPPFLAGS) -c LinkedList.cpp

clean:
	rm -f *.o *.a *.stackdump
