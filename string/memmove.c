#include <stdio.h>
#include <string.h>
int main()
{
 char str[]="javed";
char dest[]="navedAkhtar";

	printf("str:%s\n",str);
	printf("dest:%s\n",dest);
	
	memmove(str,dest,sizeof("navedAkhtar"));

	printf("\n----------------------------\n");
	printf("str:%s\n",str);
	printf("dest:%s\n",dest);

}
