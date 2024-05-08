all : Main.o

Main.o : Main.c
	gcc -Wall -g -o Main.o Main.c

clean : 
	rm  *.o;