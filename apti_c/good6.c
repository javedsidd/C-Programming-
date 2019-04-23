
#include<stdio.h>

int main()
{
	int num1=10, *num2;

	void *num3;

	num2=num3=&num1;
	num2++;
	num3++;
	
//	printf("%u\t %u\n",*num2, *num3);
	printf("%u\t %u\n",*num2, *(int*)num3);
}
