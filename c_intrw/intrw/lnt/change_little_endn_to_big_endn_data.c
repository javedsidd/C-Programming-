/*
 *program to change the little enddian data to big enddina
eg: 0xAABBCCDD
o/p:0xDDCCBBAA
 *
 * */


#include<stdio.h>

void convert_ltille_endn_to_big_endnn(int *);

int main()
{
	int num=0xAABBCCDD;
	printf("\nBefore: %x",num);
	convert_ltille_endn_to_big_endnn(&num);
	printf("\nAfter : %x\n",num);
}

void convert_ltille_endn_to_big_endnn(int *p)
{
	*p= (((((*p)<<16)&0xff000000)|(((*p)>>16)&0x000000ff)) |((((*p)<<8)&0x00ff0000) | (((*p)>>8)&0x0000ff00)));
}
