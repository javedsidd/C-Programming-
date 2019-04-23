mystrings:myStrings_main.o myStrings.o 
	gcc myStrings_main.c myStrings.c -o mystrings
	rm myStrings_main.o myStrings.o 
myStrings_main.o:myStrings_main.c myStrings.h
	gcc -c myStrings_main.c
myStrings.o:myStrings.c myStrings.h
	gcc -c myStrings.c