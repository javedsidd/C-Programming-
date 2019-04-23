

#include <stdio.h>

int var=0;
//volatile int var;
int fun()
{
	printf("In fun var:%d\n",var);
	return var++;
}

int main()
{
	do{
		printf("In main var:%d\n",var);
	}while(10 >= fun());
}
