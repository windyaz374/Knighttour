CC = gcc
CFLAGS = -c -Wall

all: madituan

madituan: main.o possible.o heuristic.o print.o check.o 
	$(CC) -o madituan main.o possible.o heuristic.o print.o check.o

main.o: main.c hrt.h
	$(CC) $(CFLAGS) main.c

possible.o: possible.c hrt.h
	$(CC) $(CFLAGS) possible.c 

heuristic.o: heuristic.c hrt.h
	$(CC) $(CFLAGS) heuristic.c
	
print.o: print.c hrt.h
	$(CC) $(CFLAGS) print.c

check.o: check.c hrt.h
	$(CC) $(CFLAGS) check.c

clean:
	rm -rf *o madituan