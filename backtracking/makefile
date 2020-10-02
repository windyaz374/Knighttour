CC = gcc
CFLAGS = -c -Wall

all: madituan

madituan: main.o move.o xuat.o
	$(CC) -o madituan main.o move.o xuat.o

main.o: main.c ma.h
	$(CC) $(CFLAGS) main.c

move.o: move.c ma.h
	$(CC) $(CFLAGS) move.c 

xuat.o: xuat.c ma.h
	$(CC) $(CFLAGS) xuat.c

clean:
	rm -rf *o madituan