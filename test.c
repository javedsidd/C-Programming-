#include <stdio.h>

int main()
{

	int var1, var2=12, var3=12;

	var1=var2==var3;

	printf("%d\n",var1);

	printf("\n----------------------------------------\n");

	char *ptr;
	printf("%d %d\n",sizeof(*ptr), sizeof(ptr));
	printf("\n----------------------------------------\n");

	printf(" %f\n",++var1);

	if(-1 < (unsigned int) 1)
	{
		printf("inside if\n");
	}
	else
	{	
		printf("inside else.\n");
	}
}
