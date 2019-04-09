CC = gcc

Lucky : Lucky.o makeReadable.o randomize.o
	gcc -o Lucky Lucky.o makeReadable.o randomize.o

makeReadable.o : makeReadable.c
	gcc -c -o makeReadable.o makeReadable.c

randomize.o : randomize.c
	gcc -c -o randomize.o randomize.c

Lucky.o : Lucky.c
	gcc -c -o Lucky.o Lucky.c

clean :
	rm *.o Lucky
