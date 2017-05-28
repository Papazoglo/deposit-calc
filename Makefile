all: main
	
test: main_test
	

main: main.o deposit.o
	mkdir bin  
	gcc build/src/main.o build/src/deposit.o -o bin/main

main_test: main_test.o deposit_test.o validation_test.o
	gcc build/test/main.o build/test/deposit_tes.o build/test/validation_test.o -o bin/test

main.o: src/main.c
	mkdir build
	mkdir build/src 
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

deposit.o: src/deposit.c 
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

main_test.o: test/main.c
	mkdir build
	mkdir build/test
	gcc -Wall -Werror -I thirdparty -c test/main.c -o build/test/main.o

deposit_test.o: test/deposit_test.c
	gcc -Wall -Werror -I src -c test/deposit_test.c -o build/test/deposit_test.o

validation_test.o: test/validation_test.c
	gcc -Wall -Werror -I src -c test/validation_test.c -o build/test/validation_test.o

clean:
	rm -r bin
	rm -r build

