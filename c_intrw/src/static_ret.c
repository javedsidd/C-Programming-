#include<stdio.h>

int fun();

int main()
{
	//int i=fun();//runs 
	static int i=fun(); //wont work
	
	//static int i=fun; //wont work
	printf("i=%d\n",i);
}
int fun()
{
	return 50;
}
