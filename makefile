CC=gcc
FLAGS= -Wall -g
AR=ar

all: main

myBank: myBank.o
	$(AR) -rcs libmyBank.a myBank.o
main: main.o myBank
	 $(CC) $(FLAGS) -o main main.o libmyBank.a
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
main.o: main.c myBank.h
	 $(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a  main

.PHONY: all clean

