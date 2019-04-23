
#include <stdio.h>

int main()
{
	int a=10,b=5;

	printf("max of %d and %d is: %d\n",a,b,max(a,b));
}

int max(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}
