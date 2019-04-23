

#include <stdio.h>

void fun(char **ptr)
{
	printf("\nIn fun(): (add)ptr=%p *ptr=%s\n",ptr,*ptr);
	*ptr="Partheev";
	//ptr="Partheev";
	printf("\nIn fun(): (add)ptr=%p *ptr=%s\n",ptr,*ptr);
}


int main()
{
	char *ptr="Mohammad Javed";
	fun(&ptr);
	printf("\nIn main: (add)ptr:%p *ptr=%s\n",ptr,ptr);
}
