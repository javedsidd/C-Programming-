
#include <stdio.h>

//#define my_sizeof(type) (type*)(&a+1) - (type*)&a

#define my_sizeof(a) (__typeof__(a)*)(&a+1) - (__typeof__(a)*)&a

int main()
{
	int a;
	int *b;
	printf("size :%d\n",my_sizeof(a));
	printf("size inptr :%d\n",my_sizeof(b));
	printf("size :%d\n",my_sizeof(int));
}
