all : main
	
main: main.o deposit.o
	mkdir bin  
	gcc build/main.o build/deposit.o -o bin/main

main.o: src/main.c
	mkdir build 
	gcc -Wall -Werror -c src/main.c -o build/main.o

deposit.o: src/deposit.c 
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o

clean:
	rm -r bin
	rm -r build

