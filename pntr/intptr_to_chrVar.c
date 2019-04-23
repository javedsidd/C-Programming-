//accessing value of a char using a int pointer

#include <stdio.h>

int main()
{
	unsigned char ch=255;
	
	int *p;

	p=(int *)&ch;
	
	printf("ch =%d \n",(0x000000ff) & *p);
}
