fibonacci: main.o fibonacci.o
	cc main.o fibonacci.o -o fibonacci
main.o: main.c fibonacci.h
	cc -c main.c
fibonacci.o: fibonacci.c fibonacci.h
	cc -c fibonacci.c
clean:
	rm -f fibonacci main.o fibonacci.o
