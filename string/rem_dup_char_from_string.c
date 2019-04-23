/*
 * WACP to remove the duplicated characters from a string
 * */


#include <stdio.h>

//void rem_dup_char_from_string(char *);

int main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%[^\n]s",str);
	printf("\nYou entered string: %s\n",str);

	int i=0,j=0;
	while(str[i+1]!='\0')
	{
		printf("i=%d str[%d]=%c\n",i,i,str[i]);
			j=i+1;
			while(str[j]==str[j+1])
			{

				printf("j=%d str[%d]=%c\n",j,j,str[j]);
				str[j]=str[j+1];j++;
				if(str[j+1]=='\0')
				{
					str[j]='\0';
					break;
				}
			}
			i=j;
			i++;
	}
	str[i]='\0';
	//rem_dup_char_from_string(str);
	printf("\nAfter removing dup characters string: %s\n",str);
}
/*
void rem_dup_char_from_string(char *s)
{
	int i=0;
	while(s[i+1]!='\0')
	{
			if(s[i]==s[i+1])
			s[i]=s[i+1];
			i++;
	}
}
*/
