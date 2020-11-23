CC=gcc
FLAGS= -Wall -g

all: main

main: main.o myBank.o
	 $(CC) $(FLAGS) -o main main.o myBank.o
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
main.o: main.c myBank.h
	 $(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o main 

.PHONY: all clean

