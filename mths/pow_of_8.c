
//power of 8 

#include <stdio.h>

int main()
{

	int n;
	
	printf("Enter the number:");
	scanf("%d",&n);

	if(((n&(n-1))==0) && ((n&0xB6DB6DB6)==0))
	printf("Power of 8\n");
	else
	printf("Not Power of 8\n");

}
