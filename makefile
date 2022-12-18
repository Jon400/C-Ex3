CFLAGS = -g -fPIC -Wall
CC=gcc
AR=ar

.PHONY: all clean

all: isort txtfind

txtfind: textFindMain.o textFind.o
	$(CC) $(CFLAGS) textFindMain.o textFind.o -o txtfind

textFindMain.o: textFindMain.c TextFindClass.h
	$(CC) $(CFLAGS) -c textFindMain.c

textFind.o: textFind.c TextFindClass.h
	$(CC) $(CFLAGS) -c textFind.c

isort: sortMain.o insertionSort.o
	$(CC) $(CFLAGS) sortMain.o insertionSort.o -o isort

sortMain.o: sortMain.c SortClass.h
	$(CC) $(CFLAGS) -c sortMain.c

insertionSort.o: insertionSort.c SortClass.h
	$(CC) $(CFLAGS) -c insertionSort.c

clean:
	rm *.o isort txtfind