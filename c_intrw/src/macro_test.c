
#include <stdio.h>

#define a 10

int main()
{
	printf("%d\n",a);
	
	#define a 20
	
#define a 30
	printf("%d\n",a);

}

