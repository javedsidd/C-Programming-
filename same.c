#include<stdio.h>

int main()
{
	int n,m;

	printf("Two numbers:\n");
	scanf("%d%d",&n,&m);

	if((n^m) == 0)
	{
		printf("equal\n");
	}
	else if((n^m) < 0)
	{
		printf("Unequal but of opposite signs\n");
	}
	else
	{
		printf("Unequal but same sign\n");

	}
}
