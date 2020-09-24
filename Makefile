fibo.out: main.c Sequences.c files.c
	gcc -g -o fibo.out main.c Sequences.c files.c

main.o: main.c
	gcc -g -c main.c

Sequences.o: Sequences.c
	gcc -g -c Sequences.c

files.o: files.c
	gcc -g -c files.c

clean:
	rm *.o
