#include<stdio.h>

int main()
{

int arr[][3]={1,2,3,4,5,6,7};

int (*p)[3]=arr;

printf("%d\t%d\n",p[1],p[2]);

++p;
printf("%d\t%d\n",p[1],p[2]);
}
