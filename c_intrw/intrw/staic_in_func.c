
#include <stdio.h>


int fun(static int a);
/*
int fun(static int a)
{
printf("In fun %d\n",a);
	
}
*/
int main()
{
printf("In main\n");
fun(10);
}
