CFLAGS = -g -fPIC -Wall
CC=gcc
AR=ar

.PHONY: all clean

all: isort

isort: sortMain.o insertionSort.o
	$(CC) $(CFLAGS) sortMain.o insertionSort.o -o isort

sortMain.o: sortMain.c SortClass.h
	$(CC) $(CFLAGS) -c sortMain.c

insertionSort.o: insertionSort.c SortClass.h
	$(CC) $(CFLAGS) -c insertionSort.c

clean:
	rm *.o isort