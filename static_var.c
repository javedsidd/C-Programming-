
#include <stdio.h>

static int a=100;


int * fun1();
void fun2()
{
	static int a =10;
	printf("in fun2: a=%d  &a=%p\n",a,&a);
	printf("in fun2: ++a=%d\n",++a);
}

int main()
{
	printf("in main statiic global a=%d &a=%p\n",a,&a);
	static int a =2;

	int *p=fun1();
	*p=1000;
	printf("*p=%d  p=%p\n",*p,p);
	printf("in main after fun1 call, a=%d &a=%p\n",a,&a);
	fun2();
	printf("in main after fun2 call, a=%d &a=%p\n",a,&a);

	a++;
	printf("in main after a++ a:%d\n",a);
}


int * fun1()
{

	static int a=4;

	//int a=4;
	printf("in fun1: a=%d  &a=%p\n",a,&a);
	printf("in fun1: ++a=%d\n",++a);
return &a;
}

