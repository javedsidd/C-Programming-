#include<stdio.h>


void fun(int a)
{
	if(a==0)
	return
	fun(a-1);
	printf("a=%d\n",a);
	fun(a-1);
	printf("a=%d\n",a);
}


int main()
{

	fun(4);
}

