#include <stdio.h>

int main()
{
	int *ip;
	
	printf("Pointer size: %ld\n", sizeof(ip));
	
	printf("Pointer size: %ld\n", sizeof(void *));
	
	printf("int size: %ld\n", sizeof(int));
}
