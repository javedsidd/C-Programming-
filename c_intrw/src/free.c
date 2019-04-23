
#include<stdio.h>

int main()
{

int *p= malloc(100);

p++;

free(p);


}
