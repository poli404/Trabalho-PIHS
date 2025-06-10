all: main

main: main.o pocketpy.o levenshtein.o
	gcc main.o pocketpy.o levenshtein.o -lm -o main

main.o: main.c
	gcc -Wall -c main.c
pocketpy.o: pocketpy.c
	gcc -Wall -c pocketpy.c
levenshtein.o: levenshtein.c
	gcc -Wall -c levenshtein.c

clean:
	rm -f main main.o pocketpy.o levenshtein.o
run: main
	./main
