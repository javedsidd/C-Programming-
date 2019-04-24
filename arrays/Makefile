#make file for arrays
array:arrays.o array_main.o
	gcc -o arrays arrays.c array_main.c
array_main.o:array_main.c arrays.h
	gcc -c array_main.c
arrays.o:arrays.c arrays.h
	gcc -c arrays.c
clean:
	rm -rf arrays.o array_main.o
