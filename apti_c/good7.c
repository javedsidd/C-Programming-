
#include <stdio.h>

int main()
{
	char str[]="computer is fun";
	char *str1="computer is fun";

//	printf("sizeof pointer: %ld\n", sizeof(int*));	
	printf("sizeof pointer: %ld\n", sizeof(void*));	
//	printf("sizeof pointer: %ld\n", sizeof(char*));	
//	printf("sizeof pointer: %ld\n", sizeof(float*));	
//	printf("sizeof pointer: %ld\n", sizeof(double*));	
//	printf("sizeof pointer: %ld\n", sizeof(long int*));

	
	printf("%ld\t%ld\n",sizeof(str),sizeof(str1));
	
	printf("%ld\t%ld\n",sizeof(*str),sizeof(*str1));
	
	printf("%c\t%c\n",(*str),(*str1));
}
