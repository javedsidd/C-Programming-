// find out the output of the following


#include <stdio.h>
int fun()
{
	printf("in fun\n");
}
int main()
{

	int x;
	int y;
	x= ~!printf;   //here printf is treated as an address
	y=!fun;
	
	printf("%p\n",printf);
	printf("%p\n",fun);

	printf("%x\n",x);
	printf("%d\n",x);
	
	printf("%x\n",y);
	printf("%d\n",y);
}
